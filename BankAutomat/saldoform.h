#ifndef SALDOFORM_H
#define SALDOFORM_H

#include <QWidget>

namespace Ui {
class SaldoForm;
}

class SaldoForm : public QWidget
{
    Q_OBJECT

public:
    explicit SaldoForm(QWidget *parent = nullptr);
    ~SaldoForm();

private slots:
    void on_btnSulje_clicked();

    void on_btnShowSaldo_clicked();

private:
    Ui::SaldoForm *ui;
};

#endif // SALDOFORM_H
