#ifndef DEBITORCREDITFORM_H
#define DEBITORCREDITFORM_H

#include <QWidget>

namespace Ui {
class DebitorCreditForm;
}

class DebitorCreditForm : public QWidget
{
    Q_OBJECT

public:
    explicit DebitorCreditForm(QWidget *parent = nullptr);
    ~DebitorCreditForm();

private slots:
    void on_btnCredit_clicked();



private:
    Ui::DebitorCreditForm *ui;
};

#endif // DEBITORCREDITFORM_H
