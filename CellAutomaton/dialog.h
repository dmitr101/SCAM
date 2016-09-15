#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
public:
    explicit Dialog(QWidget* parent = 0);
private:
    Ui::Dialog* ui;
};

#endif // DIALOG_H
