#ifndef FEEDSUB_H
#define FEEDSUB_H

#include <QDialog>

namespace Ui {
class feedsub;
}

class feedsub : public QDialog
{
    Q_OBJECT

public:
    explicit feedsub(QWidget *parent = nullptr);
    ~feedsub();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::feedsub *ui;
};

#endif // FEEDSUB_H
