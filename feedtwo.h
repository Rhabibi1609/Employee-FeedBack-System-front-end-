#ifndef FEEDTWO_H
#define FEEDTWO_H

#include <QDialog>

namespace Ui {
class feedtwo;
}

class feedtwo : public QDialog
{
    Q_OBJECT

public:
    explicit feedtwo(QWidget *parent = nullptr);
    ~feedtwo();

private slots:
    void on_login_button_clicked();

private:
    Ui::feedtwo *ui;
};

#endif // FEEDTWO_H
