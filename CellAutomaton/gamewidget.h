#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include "field.h"
#include "neighboorhood.h"
#include "rule.h"
#include <QWidget>
#include <QColorDialog>
#include <QColor>
#include <QPainter>
#include <QTimer>
#include <QString>
#include <QVector>
#include <QTime>
#include <QMouseEvent>

class Field;

class GameWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GameWidget(QWidget *parent = 0);
protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void resizeEvent(QResizeEvent *e);

signals:
    void environmentChanged(bool);
    void gameEnd(bool);

public slots:
    void startGame();
    void stopGame();
    void clear();

    void step();
    void undo();
    void fillRandomly();

    void setInterval(double seconds);
    void setCellSize(int size);
    void setField();
    void setBornRule(const QString &newBornRule);
    void setSurviveRule(const QString &newSurviveRule);
    void setGridVisibility(bool);
    void changeNeighborhood();
    void setColor();
private slots:
    void drawGrid(QPainter &p);
    void drawWorld(QPainter &p);
    void newGeneration();

private:
    QTimer* timer;
    QColor cellColor;
    int generations;
    Field* field;
    int cellSize;
    bool showGrid = true;
    bool isCreated; //для заборони певних дій до першого показу віджета
};

#endif // GAMEWIDGET_H
