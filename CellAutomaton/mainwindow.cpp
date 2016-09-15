#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    game(new GameWidget(this))
{
    ui->setupUi(this);

    game->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->gameLayout->addWidget(game);


    ui->surviveRuleEdit->setValidator(new QIntValidator());
    ui->bornRuleEdit->setValidator(new QIntValidator());

    connect(ui->fillRandomButton, SIGNAL(clicked(bool)), game, SLOT(fillRandomly()));
    connect(ui->doButton, SIGNAL(clicked(bool)), game, SLOT(step()));
    connect(ui->startButton, SIGNAL(clicked(bool)), game, SLOT(startGame()));
    connect(ui->stopButton, SIGNAL(clicked(bool)), game, SLOT(stopGame()));
    connect(ui->bornRuleEdit, SIGNAL(textChanged(QString)), game, SLOT(setBornRule(QString)));
    connect(ui->surviveRuleEdit, SIGNAL(textChanged(QString)), game, SLOT(setSurviveRule(QString)));
    connect(ui->cellSizeSpinBox, SIGNAL(valueChanged(int)), game, SLOT(setCellSize(int)));
    connect(ui->showGridCheckBox, SIGNAL(clicked(bool)), game, SLOT(setGridVisibility(bool)));
    connect(ui->clearButton, SIGNAL(clicked(bool)), game, SLOT(clear()));
    connect(ui->intervalSpinBox, SIGNAL(valueChanged(double)), game, SLOT(setInterval(double)));
    connect(ui->cellColourButton, SIGNAL(clicked(bool)), game, SLOT(setColor()));
    connect(ui->neumanRButton, SIGNAL(toggled(bool)), game, SLOT(changeNeighborhood()));
    connect(ui->actionExit, SIGNAL(triggered(bool)), this, SLOT(close()));
    connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(showAboutMessage()));
    connect(ui->actionSaveRule, SIGNAL(triggered(bool)), this, SLOT(saveRule()));
    connect(ui->actionOpenRule, SIGNAL(triggered(bool)), this, SLOT(openRule()));
    connect(ui->actionTutorial,SIGNAL(triggered(bool)), this, SLOT(showTutorial()));
    ui->startButton->setDefault(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setGameField()
{
    game->setField();
}

void MainWindow::showAboutMessage()
{
    QMessageBox::information(this, "About",
                             "Програма призначена для емулювання і вивчення клітинних автоматів <br><br> Розробник: Шинкар Дмитро <br> КПІ ТЕФ АПЕПС 2016");
}

void MainWindow::showTutorial()
{
    QMessageBox::information(this, "Короткий гайд", "Область зліва - <b>поле</b>. Ви можете малювати на ньому клітини мишкою. Розмір поля змінюється автоматично, при зміні розмірів вікна. Для запобігання помилок, оновлення зупиняється при будь якій зміні оточення.\
                             <br>Справа розташований блок управління, його елементи:\
                             <br>1) Поля вводу правил \
                             <br>У полі B потрібно писати кількість живих сусідів для \"народження кліитини\", у полі S - для її виживання. \
                             <br>2) Вибір типу сусідства. Сусідство Мура включає у себе всі 8 клітин. Фон Неймана лише 4. \
                             <br>3) Розмір клітини. У пікселях. \
                             <br>4) Управління видом. Вибір кольору клітин і видимості/невидимості сітки на полі. \
                             <br>5) Управління часом автоматичного оновлення. Далі іде блок управління оновленням. \
                             <br><center>Кнопка Старт</center> \
                             <br>Розпочинає автоматичне оновлення з періодом і правилами, заданими вище. \
                             <br><center>Стоп</center> \
                             <br>Зупинити оновлення. \
                             <br><center>Очистити</center> \
                             <br>Очищує поле, всі клітини помирають. \
                             <br><center>Заповнити випадково</center> \
                             <br>Поле заповнюється у випадковому порядку. \
                             <br><center>Крок</center> \
                             <br>Перехід на наступне покоління вручну.");
}

void MainWindow::saveRule()
{
    game->stopGame();
    QString filename = QFileDialog::getSaveFileName(this, "Save rule", ".", tr("Xml files (*.xml)"));
    QFile file(filename);
    file.open(QIODevice::WriteOnly);

    QXmlStreamWriter writer(&file);
    writer.setAutoFormatting(true);

    writer.writeStartDocument();
    writer.writeStartElement("rule");
    writer.writeTextElement("born", ui->bornRuleEdit->text());
    writer.writeTextElement("survive", ui->surviveRuleEdit->text());
    writer.writeEndElement();
    writer.writeEndDocument();

    file.close();
}

void MainWindow::openRule()
{
    game->stopGame();
    QString filename = QFileDialog::getOpenFileName(this, "Open rule", ".", "Xml files (*.xml)");
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
        QMessageBox::information(this, "Error", "Sorry, something went wrong with that file!");
        return;
    }
    QXmlStreamReader reader;
    reader.setDevice(&file);
    while(!reader.atEnd()){
        reader.readNext();
        if(reader.name() == "born")
            ui->bornRuleEdit->setText(reader.readElementText());
        if(reader.name() == "survive")
            ui->surviveRuleEdit->setText(reader.readElementText());
    }
    file.close();
}
