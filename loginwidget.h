#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>

namespace Ui {
class loginWidget;
}

class loginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit loginWidget(QWidget *parent = nullptr);
    ~loginWidget();

private:
    Ui::loginWidget *ui;
};

#endif // LOGINWIDGET_H
