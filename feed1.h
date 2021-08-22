#ifndef FEED1_H
#define FEED1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Feed1; }
QT_END_NAMESPACE

class Feed1 : public QMainWindow
{
    Q_OBJECT

public:
    Feed1(QWidget *parent = nullptr);
    ~Feed1();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Feed1 *ui;
};
#endif // FEED1_H
