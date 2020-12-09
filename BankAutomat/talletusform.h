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

private:
    Ui::TalletusForm *ui;
};

#endif // TALLETUSFORM_H
