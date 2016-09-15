#ifndef FIELD_H
#define FIELD_H

#include "gamewidget.h"
#include "neighboorhood.h"
#include "rule.h"
#include <QMessageBox>
#include <QVector>



class Field
{
public:
    Field(int w, int h, QVector<int> b, QVector<int> s);
    ~Field();
    void update();
    void clear();
    bool at(int i, int j);
    void set(int i, int j, bool val);
    int getWidth() const;
    int getHeight() const;
    void setBornRule(QVector<int> newBorn);
    void setSurviveRule(QVector<int> newSurvive);
    void changeNeighborhood();
    void resize(int newW, int newH);
private:
    enum {Moore, Neuman} type;
    int width;
    int height;
    bool** oldField;
    bool** newField;
    Neighborhood** neighboors;
    Rule rule;
};

#endif // FIELD_H
