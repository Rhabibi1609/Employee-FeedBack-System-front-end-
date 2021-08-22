#include "feedstudent.h"
#include "ui_feedstudent.h"
#include "feedsubmit.h"
FeedStudent::FeedStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FeedStudent)
{
    ui->setupUi(this);
}

FeedStudent::~FeedStudent()
{
    delete ui;
}

void FeedStudent::on_pushButton_clicked()
{
    hide();
    feedsubmit submitted;
    submitted.setModal(true);
    submitted.exec();
}

