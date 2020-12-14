#ifndef SIGNOUTFORM_H
#define SIGNOUTFORM_H

#include <QWidget>

namespace Ui {
class SignOutForm;
}

class SignOutForm : public QWidget
{
    Q_OBJECT

public:
    explicit SignOutForm(QWidget *parent = nullptr);
    ~SignOutForm();

private slots:
    void on_btnSulje_clicked();

private:
    Ui::SignOutForm *ui;
};

#endif // SIGNOUTFORM_H
