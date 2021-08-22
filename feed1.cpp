#include "feed1.h"
#include "ui_feed1.h"
#include "feedtwo.h"
#include "teachlogin.h"
Feed1::Feed1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Feed1)
{
    ui->setupUi(this);
}

Feed1::~Feed1()
{
    delete ui;
}

void Feed1::on_pushButton_clicked()
{

}

void Feed1::on_pushButton_2_clicked()
{
    hide();
    feedtwo feedtoo;
    feedtoo.setModal(true);
    feedtoo.exec();
}




void Feed1::on_pushButton_3_clicked()
{
    hide();
    TeachLogin teacher;
    teacher.setModal(true);
    teacher.exec();
}

