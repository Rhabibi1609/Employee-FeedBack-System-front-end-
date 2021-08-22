#include "feedsubmit.h"
#include "ui_feedsubmit.h"

feedsubmit::feedsubmit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::feedsubmit)
{
    ui->setupUi(this);
}

feedsubmit::~feedsubmit()
{
    delete ui;
}

void feedsubmit::on_pushButton_clicked()
{
    hide();
    close();
}

