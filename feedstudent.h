#ifndef FEEDSTUDENT_H
#define FEEDSTUDENT_H

#include <QDialog>

namespace Ui {
class FeedStudent;
}

class FeedStudent : public QDialog
{
    Q_OBJECT

public:
    explicit FeedStudent(QWidget *parent = nullptr);
    ~FeedStudent();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FeedStudent *ui;
};

#endif // FEEDSTUDENT_H
