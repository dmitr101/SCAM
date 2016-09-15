#include "field.h"

Field::Field(int w, int h, QVector<int> b, QVector<int> s):rule(Rule(b,s)), type(Moore), width(w), height(h)
{
    oldField = new bool* [height];
    for(int i = 0; i < height; i++)
        oldField[i] = new bool[width];

    newField = new bool* [height];
    for(int i = 0; i < height; i++)
        newField[i] = new bool[width];

    clear();
    neighboors = new Neighborhood*[height];
    for(int i = 0; i < height; i++)
        neighboors[i] = new Neighborhood[width];

    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            neighboors[i][j] = Neighborhood(i, j, width, height, oldField);
}

Field::~Field()
{
    for(int i = 0; i < height; i++)
        delete[] oldField[i];
    for(int i = 0; i < height; i++)
        delete[] newField[i];
    for(int i = 0; i < height; i++)
        delete[] neighboors[i];
}

void Field::clear(){
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            oldField[i][j] = false;
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            newField[i][j] = false;
}

bool Field::at(int i, int j)
{
    if((j >= 0 && j < width) && (i >= 0 && i < height))
        return newField[i][j];
    else
        return false;
}

void Field::set(int i, int j, bool val)
{
    if((j >= 0 && j < width) && (i >= 0 && i < height))
        newField[i][j] = val;
}

int Field::getWidth() const
{
    return width;
}

int Field::getHeight() const
{
    return height;
}

void Field::setBornRule(QVector<int> newBorn)
{
    rule.changeBorn(newBorn);
}

void Field::setSurviveRule(QVector<int> newSurvive)
{
    rule.changeSurvive(newSurvive);
}

void Field::changeNeighborhood()
{
    if(type == Moore)
        type = Neuman;
    else
        type = Moore;
}

void Field::resize(int newW, int newH)
{
    bool** _oldField = new bool* [newH]; //створюємо буфер старого поля
    for(int i = 0; i < newH; i++)
        _oldField[i] = new bool[newW];

    bool** _newField = new bool* [newH]; // буфер нового
    for(int i = 0; i < newH; i++)
        _newField[i] = new bool[newW];

    int _width = (newW > width)?(width):(newW); //ширина і висота на випадок, якщо поле збільшили
    int _height = (newH > height)?(height):(newH);//для копіювання попереднього

    for(int i = 0; i < newH; i++)
        for(int j = 0; j < newW; j++){
            if(i < _height && j < _width)
                _oldField[i][j] = oldField[i][j];
            else
                _oldField[i][j] = false;
        }  //зкопіювали
    for(int i = 0; i < newH; i++)
        for(int j = 0; j < newW; j++){
            if(i < _height && j < _width)
                _newField[i][j] = newField[i][j];
            else
                _newField[i][j] = false;
        }

    for(int i = 0; i < height; i++)
        delete[] oldField[i];
    for(int i = 0; i < height; i++)
        delete[] newField[i]; //очистили пам'ять
    for(int i = 0; i < height; i++)
        delete[] neighboors[i];
    height = newH; //оновили загальну ширину і висоту
    width = newW;
    oldField = new bool* [height];
    for(int i = 0; i < height; i++)
        oldField[i] = new bool[width];

    newField = new bool* [height]; //створили заново
    for(int i = 0; i < height; i++)
        newField[i] = new bool[width];

    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            oldField[i][j] = _oldField[i][j];
    for(int i = 0; i < height; i++) //скопіювали дані з буфера
        for(int j = 0; j < width; j++)
            newField[i][j] = _newField[i][j];

    neighboors = new Neighborhood*[height];
    for(int i = 0; i < height; i++)
        neighboors[i] = new Neighborhood[width];
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            neighboors[i][j] = Neighborhood(i, j, width, height, oldField);

    for(int i = 0; i < height; i++)
        delete[] _oldField[i];
    for(int i = 0; i < height; i++)
        delete[] _newField[i];

}

void Field::update(){
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            oldField[i][j] = newField[i][j];
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            newField[i][j] = rule.apply(oldField[i][j],
                    (type == Moore)?(neighboors[i][j].getMooreCount()):(neighboors[i][j].getNeumanCount()));
}
