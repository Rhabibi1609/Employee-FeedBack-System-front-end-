#include "feedtwo.h"
#include "ui_feedtwo.h"
#include "feedsub.h"
feedtwo::feedtwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::feedtwo)
{
    ui->setupUi(this);
}

feedtwo::~feedtwo()
{
    delete ui;
}




void feedtwo::on_login_button_clicked()
{
    hide();
    feedsub feedsubbed;
    feedsubbed.setModal(true);
    feedsubbed.exec();
}

