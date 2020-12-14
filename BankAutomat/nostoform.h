#ifndef NOSTOFORM_H
#define NOSTOFORM_H

#include <QWidget>

namespace Ui {
class NostoForm;
}

class NostoForm : public QWidget
{
    Q_OBJECT

public:
    explicit NostoForm(QWidget *parent = nullptr);
    ~NostoForm();

private slots:
    void on_btnStop_clicked();

    void on_btn20euroa_clicked();

    void on_btn40euroa_clicked();

    void on_btn50euroa_clicked();

    void on_btn60euroa_clicked();

    void on_btn80euroa_clicked();

    void on_btnVahvista_clicked();

    void on_btn100euroa_clicked();

    void on_lineEditMuuSumma_textChanged(const QString &arg1);

private:
    Ui::NostoForm *ui;
};

#endif // NOSTOFORM_H
