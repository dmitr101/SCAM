#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include <QValidator>
#include <QIntValidator>
#include <QFileDialog>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include "gamewidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setGameField();

private slots:
    void showAboutMessage();
    void showTutorial();
    void saveRule();
    void openRule();


private:
    Ui::MainWindow *ui;
    GameWidget* game;
};

#endif // MAINWINDOW_H
