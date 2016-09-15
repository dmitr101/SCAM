#include "gamewidget.h"
#include "field.h"

GameWidget::GameWidget(QWidget *parent) : QWidget(parent),
    timer(new QTimer(this)),
    generations(-1),
    cellSize(30),
    cellColor(QColor(0,0,0)),
    showGrid(true),
    isCreated(false)
{
    timer->setInterval(300);
    connect(timer, SIGNAL(timeout()), this, SLOT(newGeneration()));
    connect(this, SIGNAL(environmentChanged(bool)), this, SLOT(stopGame()));
    field = nullptr;
}

void GameWidget::setField(){ //для створення поля *після* першого показу віджета
    int w = width()/cellSize;
    int h = height()/cellSize;
    field = new Field(w, h, (QVector<int>() << 3), (QVector<int>() << 3 << 2));
    isCreated = true;
}

void GameWidget::paintEvent(QPaintEvent *){
    QPainter p(this);
    if(showGrid)
        drawGrid(p);
    drawWorld(p);
}

void GameWidget::mousePressEvent(QMouseEvent* event)
{
    emit environmentChanged(true);
    int x = floor(event->x()/cellSize);
    int y = floor(event->y()/cellSize);
    field->set(y, x, !field->at(y, x));
    update();
}

void GameWidget::mouseMoveEvent(QMouseEvent *event)
{
    emit environmentChanged(true);
    int x = floor(event->x()/cellSize);
    int y = floor(event->y()/cellSize);
    field->set(y, x, !field->at(y, x));
    update();
}

void GameWidget::startGame()
{
    timer->start();
}

void GameWidget::stopGame()
{
    timer->stop();
}

void GameWidget::clear()
{
    emit environmentChanged(true);
    field->clear();
    update();
}

void GameWidget::step()
{
    field->update();
    update();
}

void GameWidget::undo()
{

}

void GameWidget::fillRandomly(){
    emit environmentChanged(true);
    qsrand(QTime::currentTime().msec());
    int h = field->getHeight();
    int w = field->getWidth();
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            field->set(i, j, qrand()%2);
    update();
}

void GameWidget::setBornRule(const QString& newBornRule){
    emit environmentChanged(true);
    QVector<int> born;
    int buff = newBornRule.toInt();
    while(buff){
        born << buff%10;
        buff /=10;
    }
    field->setBornRule(born);
}

void GameWidget::setSurviveRule(const QString& newSurviveRule){
    emit environmentChanged(true);
    QVector<int> surv;
    int buff = newSurviveRule.toInt();
    while(buff){
        surv << buff%10;
        buff /=10;
    }
    field->setSurviveRule(surv);
}

void GameWidget::setGridVisibility(bool)
{
    emit environmentChanged(true);
    showGrid = !showGrid;
    update();
}

void GameWidget::changeNeighborhood()
{
    emit environmentChanged(true);
    field->changeNeighborhood();
}

void GameWidget::setColor()
{
    emit environmentChanged(true);
    QColor newColor = QColorDialog::getColor(cellColor);
    if(newColor.isValid())
        cellColor = newColor;
    update();
}

void GameWidget::setInterval(double seconds){
    emit environmentChanged(true);
    timer->setInterval(seconds*500);
}

void GameWidget::setCellSize(int size){
    emit environmentChanged(true);
    cellSize = size;
    int w = width()/size;
    int h = height()/size;
    field->resize(w, h);
    update();
}

void GameWidget::drawGrid(QPainter &p){
    QRect borders(0, 0, field->getWidth()*cellSize, field->getHeight()*cellSize);
    QColor gridColor = Qt::black;
    gridColor.setAlpha(90);
    p.setPen(gridColor);
    for(int i = cellSize; i <= borders.width(); i+=cellSize)
        p.drawLine(i, 0, i, borders.height());
    for(int i = cellSize; i <= borders.height(); i+=cellSize)
        p.drawLine(0, i, borders.width(), i);
    p.drawRect(borders);
}

void GameWidget::drawWorld(QPainter &p){
    for(int i = 0; i <= field->getHeight(); i++){
        for(int j = 0; j <= field->getWidth(); j++){
            if(field->at(i, j)){
                QRect r(j*cellSize, i*cellSize, cellSize, cellSize);
                p.fillRect(r, QBrush(cellColor));
            }
        }
    }
}

void GameWidget::newGeneration()
{
    field->update();
    update();
}

void GameWidget::resizeEvent(QResizeEvent *e){
    emit environmentChanged(true);
    if(isCreated){
        int newH = e->size().height() / cellSize;
        int newW = e->size().width() / cellSize;
        field->resize(newW, newH);
    }
    update();
}

