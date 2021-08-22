#ifndef FEEDSTUDENT_COPY_H
#define FEEDSTUDENT_COPY_H

#include <QDialog>

namespace Ui {
class FeedStudent_copy;
}

class FeedStudent_copy : public QDialog
{
    Q_OBJECT

public:
    explicit FeedStudent_copy(QWidget *parent = nullptr);
    ~FeedStudent_copy();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FeedStudent_copy *ui;
};

#endif // FEEDSTUDENT_H
