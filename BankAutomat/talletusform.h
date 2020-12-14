#ifndef TALLETUSFORM_H
#define TALLETUSFORM_H

#include <QWidget>

namespace Ui {
class TalletusForm;
}

class TalletusForm : public QWidget
{
    Q_OBJECT

public:
    explicit TalletusForm(QWidget *parent = nullptr);
    ~TalletusForm();

private slots:
    void on_btnVahvistaTalletus_clicked();

    void on_btnCloseTalletus_clicked();

    void on_lineEditSiirtoSumma_textChanged(const QString &arg1);

private:
    Ui::TalletusForm *ui;
};

#endif // TALLETUSFORM_H
