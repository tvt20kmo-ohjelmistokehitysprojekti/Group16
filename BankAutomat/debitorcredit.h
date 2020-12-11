#ifndef DEBITORCREDIT_H
#define DEBITORCREDIT_H

#include <QWidget>

namespace Ui {
class DebitorCredit;
}

class DebitorCredit : public QWidget
{
    Q_OBJECT

public:
    explicit DebitorCredit(QWidget *parent = nullptr);
    ~DebitorCredit();

private slots:
    void on_btnValitseCredit_clicked();

    void on_btnValitseDebit_clicked();


    void on_btnTili_clicked();

private:
    Ui::DebitorCredit *ui;
};


#endif // DEBITORCREDIT_H
