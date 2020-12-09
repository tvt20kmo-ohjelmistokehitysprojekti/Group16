#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>

namespace Ui {
class MenuForm;
}

class MenuForm : public QWidget
{
    Q_OBJECT

public:
    explicit MenuForm(QWidget *parent = nullptr);
    ~MenuForm();

private slots:
    void on_btnTapahtumat_clicked();

    void on_btnNosto_clicked();

    void on_btnSaldo_clicked();

    void on_btnSiirto_clicked();

    void on_btnSuljeMenu_clicked();

private:
    Ui::MenuForm *ui;
};

#endif // MENUFORM_H
