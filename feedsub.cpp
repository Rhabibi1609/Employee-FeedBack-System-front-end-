#include "feedsub.h"
#include "ui_feedsub.h"
#include "feedstudent.h"
feedsub::feedsub(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::feedsub)
{
    ui->setupUi(this);
}

feedsub::~feedsub()
{
    delete ui;
}

void feedsub::on_pushButton_clicked()
{
    hide();
    FeedStudent feedsoos;
    feedsoos.setModal(true);
    feedsoos.exec();
}


void feedsub::on_pushButton_2_clicked()
{
    hide();
    FeedStudent feedsoos;
    feedsoos.setModal(true);
    feedsoos.exec();
}


void feedsub::on_pushButton_3_clicked()
{
    hide();
    FeedStudent feedsoos;
    feedsoos.setModal(true);
    feedsoos.exec();
}

