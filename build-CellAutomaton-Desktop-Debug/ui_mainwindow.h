/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenRule;
    QAction *actionSaveRule;
    QAction *actionSave_figure;
    QAction *actionSaveWorld;
    QAction *actionExit;
    QAction *actionTutorial;
    QAction *actionAbout;
    QAction *actionOpenWorld;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *mainLayout;
    QVBoxLayout *gameLayout;
    QVBoxLayout *controlsLayout;
    QHBoxLayout *ruleLayout;
    QLabel *bRuleLabel;
    QLineEdit *bornRuleEdit;
    QLabel *sRuleLabel;
    QLineEdit *surviveRuleEdit;
    QHBoxLayout *neighboorLayout;
    QRadioButton *moorRButton;
    QRadioButton *neumanRButton;
    QHBoxLayout *sizeLAyout;
    QLabel *cellSizeLabel;
    QSpinBox *cellSizeSpinBox;
    QHBoxLayout *colourLayout;
    QPushButton *cellColourButton;
    QCheckBox *showGridCheckBox;
    QHBoxLayout *timeLayout;
    QLabel *updateTimeLabel;
    QDoubleSpinBox *intervalSpinBox;
    QHBoxLayout *startStopLayout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *clearButton;
    QHBoxLayout *stepLayout;
    QPushButton *fillRandomButton;
    QPushButton *doButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(895, 742);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionOpenRule = new QAction(MainWindow);
        actionOpenRule->setObjectName(QStringLiteral("actionOpenRule"));
        actionSaveRule = new QAction(MainWindow);
        actionSaveRule->setObjectName(QStringLiteral("actionSaveRule"));
        actionSave_figure = new QAction(MainWindow);
        actionSave_figure->setObjectName(QStringLiteral("actionSave_figure"));
        actionSaveWorld = new QAction(MainWindow);
        actionSaveWorld->setObjectName(QStringLiteral("actionSaveWorld"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QStringLiteral("actionTutorial"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionOpenWorld = new QAction(MainWindow);
        actionOpenWorld->setObjectName(QStringLiteral("actionOpenWorld"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mainLayout = new QHBoxLayout();
        mainLayout->setSpacing(6);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        gameLayout = new QVBoxLayout();
        gameLayout->setSpacing(6);
        gameLayout->setObjectName(QStringLiteral("gameLayout"));
        gameLayout->setSizeConstraint(QLayout::SetDefaultConstraint);

        mainLayout->addLayout(gameLayout);

        controlsLayout = new QVBoxLayout();
        controlsLayout->setSpacing(6);
        controlsLayout->setObjectName(QStringLiteral("controlsLayout"));
        controlsLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        controlsLayout->setContentsMargins(-1, -1, 0, -1);
        ruleLayout = new QHBoxLayout();
        ruleLayout->setSpacing(6);
        ruleLayout->setObjectName(QStringLiteral("ruleLayout"));
        ruleLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        bRuleLabel = new QLabel(centralWidget);
        bRuleLabel->setObjectName(QStringLiteral("bRuleLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bRuleLabel->sizePolicy().hasHeightForWidth());
        bRuleLabel->setSizePolicy(sizePolicy1);

        ruleLayout->addWidget(bRuleLabel);

        bornRuleEdit = new QLineEdit(centralWidget);
        bornRuleEdit->setObjectName(QStringLiteral("bornRuleEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bornRuleEdit->sizePolicy().hasHeightForWidth());
        bornRuleEdit->setSizePolicy(sizePolicy2);
        bornRuleEdit->setMaximumSize(QSize(16777215, 16777215));

        ruleLayout->addWidget(bornRuleEdit);

        sRuleLabel = new QLabel(centralWidget);
        sRuleLabel->setObjectName(QStringLiteral("sRuleLabel"));
        sizePolicy1.setHeightForWidth(sRuleLabel->sizePolicy().hasHeightForWidth());
        sRuleLabel->setSizePolicy(sizePolicy1);

        ruleLayout->addWidget(sRuleLabel);

        surviveRuleEdit = new QLineEdit(centralWidget);
        surviveRuleEdit->setObjectName(QStringLiteral("surviveRuleEdit"));
        sizePolicy2.setHeightForWidth(surviveRuleEdit->sizePolicy().hasHeightForWidth());
        surviveRuleEdit->setSizePolicy(sizePolicy2);

        ruleLayout->addWidget(surviveRuleEdit);


        controlsLayout->addLayout(ruleLayout);

        neighboorLayout = new QHBoxLayout();
        neighboorLayout->setSpacing(6);
        neighboorLayout->setObjectName(QStringLiteral("neighboorLayout"));
        neighboorLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        moorRButton = new QRadioButton(centralWidget);
        moorRButton->setObjectName(QStringLiteral("moorRButton"));
        sizePolicy1.setHeightForWidth(moorRButton->sizePolicy().hasHeightForWidth());
        moorRButton->setSizePolicy(sizePolicy1);
        moorRButton->setChecked(true);

        neighboorLayout->addWidget(moorRButton);

        neumanRButton = new QRadioButton(centralWidget);
        neumanRButton->setObjectName(QStringLiteral("neumanRButton"));
        neumanRButton->setChecked(false);

        neighboorLayout->addWidget(neumanRButton);


        controlsLayout->addLayout(neighboorLayout);

        sizeLAyout = new QHBoxLayout();
        sizeLAyout->setSpacing(6);
        sizeLAyout->setObjectName(QStringLiteral("sizeLAyout"));
        sizeLAyout->setSizeConstraint(QLayout::SetDefaultConstraint);
        cellSizeLabel = new QLabel(centralWidget);
        cellSizeLabel->setObjectName(QStringLiteral("cellSizeLabel"));
        sizePolicy1.setHeightForWidth(cellSizeLabel->sizePolicy().hasHeightForWidth());
        cellSizeLabel->setSizePolicy(sizePolicy1);

        sizeLAyout->addWidget(cellSizeLabel);

        cellSizeSpinBox = new QSpinBox(centralWidget);
        cellSizeSpinBox->setObjectName(QStringLiteral("cellSizeSpinBox"));
        sizePolicy1.setHeightForWidth(cellSizeSpinBox->sizePolicy().hasHeightForWidth());
        cellSizeSpinBox->setSizePolicy(sizePolicy1);
        cellSizeSpinBox->setMinimum(1);
        cellSizeSpinBox->setMaximum(50);
        cellSizeSpinBox->setValue(30);

        sizeLAyout->addWidget(cellSizeSpinBox);


        controlsLayout->addLayout(sizeLAyout);

        colourLayout = new QHBoxLayout();
        colourLayout->setSpacing(6);
        colourLayout->setObjectName(QStringLiteral("colourLayout"));
        colourLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        cellColourButton = new QPushButton(centralWidget);
        cellColourButton->setObjectName(QStringLiteral("cellColourButton"));
        sizePolicy1.setHeightForWidth(cellColourButton->sizePolicy().hasHeightForWidth());
        cellColourButton->setSizePolicy(sizePolicy1);

        colourLayout->addWidget(cellColourButton);

        showGridCheckBox = new QCheckBox(centralWidget);
        showGridCheckBox->setObjectName(QStringLiteral("showGridCheckBox"));
        sizePolicy1.setHeightForWidth(showGridCheckBox->sizePolicy().hasHeightForWidth());
        showGridCheckBox->setSizePolicy(sizePolicy1);
        showGridCheckBox->setChecked(true);

        colourLayout->addWidget(showGridCheckBox);


        controlsLayout->addLayout(colourLayout);

        timeLayout = new QHBoxLayout();
        timeLayout->setSpacing(6);
        timeLayout->setObjectName(QStringLiteral("timeLayout"));
        timeLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        updateTimeLabel = new QLabel(centralWidget);
        updateTimeLabel->setObjectName(QStringLiteral("updateTimeLabel"));
        sizePolicy1.setHeightForWidth(updateTimeLabel->sizePolicy().hasHeightForWidth());
        updateTimeLabel->setSizePolicy(sizePolicy1);

        timeLayout->addWidget(updateTimeLabel);

        intervalSpinBox = new QDoubleSpinBox(centralWidget);
        intervalSpinBox->setObjectName(QStringLiteral("intervalSpinBox"));
        sizePolicy1.setHeightForWidth(intervalSpinBox->sizePolicy().hasHeightForWidth());
        intervalSpinBox->setSizePolicy(sizePolicy1);
        intervalSpinBox->setMinimum(0.1);
        intervalSpinBox->setMaximum(1.5);
        intervalSpinBox->setSingleStep(0.1);
        intervalSpinBox->setValue(0.5);

        timeLayout->addWidget(intervalSpinBox);


        controlsLayout->addLayout(timeLayout);

        startStopLayout = new QHBoxLayout();
        startStopLayout->setSpacing(6);
        startStopLayout->setObjectName(QStringLiteral("startStopLayout"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        startStopLayout->addWidget(startButton);

        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        startStopLayout->addWidget(stopButton);

        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        startStopLayout->addWidget(clearButton);


        controlsLayout->addLayout(startStopLayout);

        stepLayout = new QHBoxLayout();
        stepLayout->setSpacing(6);
        stepLayout->setObjectName(QStringLiteral("stepLayout"));
        fillRandomButton = new QPushButton(centralWidget);
        fillRandomButton->setObjectName(QStringLiteral("fillRandomButton"));

        stepLayout->addWidget(fillRandomButton);

        doButton = new QPushButton(centralWidget);
        doButton->setObjectName(QStringLiteral("doButton"));

        stepLayout->addWidget(doButton);


        controlsLayout->addLayout(stepLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        controlsLayout->addItem(verticalSpacer);


        mainLayout->addLayout(controlsLayout);


        gridLayout->addLayout(mainLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 895, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        cellSizeLabel->setBuddy(cellSizeSpinBox);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpenRule);
        menuFile->addAction(actionSaveRule);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionTutorial);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpenRule->setText(QApplication::translate("MainWindow", "Open rule", 0));
        actionSaveRule->setText(QApplication::translate("MainWindow", "Save rule", 0));
        actionSave_figure->setText(QApplication::translate("MainWindow", "Save figure", 0));
        actionSaveWorld->setText(QApplication::translate("MainWindow", "Save world", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionOpenWorld->setText(QApplication::translate("MainWindow", "Open world", 0));
        bRuleLabel->setText(QApplication::translate("MainWindow", "B:", 0));
        bornRuleEdit->setText(QString());
        sRuleLabel->setText(QApplication::translate("MainWindow", "S:", 0));
        surviveRuleEdit->setText(QString());
        moorRButton->setText(QApplication::translate("MainWindow", "Moore neighboorhood", 0));
        neumanRButton->setText(QApplication::translate("MainWindow", "Von Neuman neighborhood", 0));
        cellSizeLabel->setText(QApplication::translate("MainWindow", "Cell size:", 0));
        cellSizeSpinBox->setSpecialValueText(QApplication::translate("MainWindow", "pixels", 0));
        cellColourButton->setText(QApplication::translate("MainWindow", "Cell Colour", 0));
        showGridCheckBox->setText(QApplication::translate("MainWindow", "show grid", 0));
        updateTimeLabel->setText(QApplication::translate("MainWindow", "Auto Update interval(in 1/10 of second):", 0));
        startButton->setText(QApplication::translate("MainWindow", "Start", 0));
        stopButton->setText(QApplication::translate("MainWindow", "Stop", 0));
        clearButton->setText(QApplication::translate("MainWindow", "Clear", 0));
        fillRandomButton->setText(QApplication::translate("MainWindow", "Fill randomly", 0));
        doButton->setText(QApplication::translate("MainWindow", "Step", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
