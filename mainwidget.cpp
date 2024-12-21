#include "mainwidget.h"
#include "./ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    // 设置主窗口布局
    QHBoxLayout *mainWidgetLayout = new QHBoxLayout(); // 水平布局
    mainWidgetLayout->addWidget(ui->diaListWidget);
    mainWidgetLayout->addWidget(ui->diaMsgWidget);
    mainWidgetLayout->setStretchFactor(ui->diaListWidget, 1);
    mainWidgetLayout->setStretchFactor(ui->diaMsgWidget, 2);
    this->setLayout(mainWidgetLayout);
    // 设置背景图片


}

MainWidget::~MainWidget()
{
    delete ui;
}
