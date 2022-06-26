#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->bClick,&QPushButton::clicked,this,&MainWindow::ClickCounter);
    connect(ui->ltext, &QLineEdit::textChanged,this,&MainWindow::CountLetter);
    connect(ui->b_1,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_2,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_3,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->hSlider,&QSlider::valueChanged, ui->vSlider,&QSlider::setValue);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ClickCounter()
{
    ui->sCounter->setValue(ui->sCounter->value()+1);
}

void MainWindow::CountLetter()
{
    QString string = ui->ltext->text();
    int words=0;
    if(string>='A' && string<='Z'){
        words++;
    }
    ui->sCounter->setValue(words);
}

void MainWindow::LineEditInput()
{
    QPushButton *button = (QPushButton*)sender();
    ui->ltext->setText(ui->ltext->text()+button->text());
}

void MainWindow::setOne()
{
    ui->ltext->setText("1");
}

void MainWindow::setTwo()
{
    ui->ltext->setText("2");
}

