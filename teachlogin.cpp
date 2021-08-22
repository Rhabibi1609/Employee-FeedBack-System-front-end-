#include "teachlogin.h"
#include "ui_teachlogin.h"
#include "rate.h"
TeachLogin::TeachLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeachLogin)
{
    ui->setupUi(this);
}

TeachLogin::~TeachLogin()
{
    delete ui;
}

void TeachLogin::on_pushButton_clicked()
{
    hide();
    rate rated;
    rated.setModal(true);
    rated.exec();
}

