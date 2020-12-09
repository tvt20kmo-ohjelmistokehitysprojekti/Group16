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
    void on_btnSiirto_clicked();

private:
    Ui::SiirtoForm *ui;
};

#endif // SIIRTOFORM_H
