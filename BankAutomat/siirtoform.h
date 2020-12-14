#ifndef SIIRTOFORM_H
#define SIIRTOFORM_H

#include <QWidget>

namespace Ui {
class SiirtoForm;
}

class SiirtoForm : public QWidget
{
    Q_OBJECT

public:
    explicit SiirtoForm(QWidget *parent = nullptr);
    ~SiirtoForm();

private slots:

    void on_btnVahvistaSiirto_clicked();

    void on_btnStop_clicked();

    void on_lineEditSiirtoSumma_textChanged(const QString &arg1);

private:
    Ui::SiirtoForm *ui;
};

#endif // SIIRTOFORM_H
