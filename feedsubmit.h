#ifndef FEEDSUBMIT_H
#define FEEDSUBMIT_H

#include <QDialog>

namespace Ui {
class feedsubmit;
}

class feedsubmit : public QDialog
{
    Q_OBJECT

public:
    explicit feedsubmit(QWidget *parent = nullptr);
    ~feedsubmit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::feedsubmit *ui;
};

#endif // FEEDSUBMIT_H
