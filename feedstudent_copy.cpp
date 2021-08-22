#include "feedstudent_copy.h"
#include "ui_feedstudent_copy.h"
#include "feedsubmit.h"
FeedStudent_copy::FeedStudent_copy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FeedStudent)
{
    ui->setupUi(this);
}

FeedStudent_copy::~FeedStudent()
{
    delete ui;
}

void FeedStudent_copy::on_pushBtton_clicked()
{
    hide();
    feedsubmit submitted;
    submitted.setModal(true);
    submitted.exec();
}

