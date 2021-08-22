#include "rate.h"
#include "ui_rate.h"

rate::rate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rate)
{
    ui->setupUi(this);
}

rate::~rate()
{
    delete ui;
}

void rate::on_pushButton_clicked()
{
    close();
}

