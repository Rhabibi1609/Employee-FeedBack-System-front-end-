#ifndef TEACHLOGIN_H
#define TEACHLOGIN_H

#include <QDialog>

namespace Ui {
class TeachLogin;
}

class TeachLogin : public QDialog
{
    Q_OBJECT

public:
    explicit TeachLogin(QWidget *parent = nullptr);
    ~TeachLogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TeachLogin *ui;
};

#endif // TEACHLOGIN_H
