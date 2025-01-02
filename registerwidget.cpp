#include "registerwidget.h"
#include "ui_registerwidget.h"

registerWidget::registerWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerWidget)
{
    ui->setupUi(this);
}

registerWidget::~registerWidget()
{
    delete ui;
}
