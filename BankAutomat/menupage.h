#ifndef MENUPAGE_H
#define MENUPAGE_H

#include <QWidget>

namespace Ui {
class MenuPage;
}

class MenuPage : public QWidget
{
    Q_OBJECT

public:
    explicit MenuPage(QWidget *parent = nullptr);
    ~MenuPage()
    {
        delete ui;
    }

private slots:
    void on_btnOpenNosto_clicked();

    void on_btnOpenSaldo_clicked();

private:
    Ui::MenuPage *ui;
};

#endif // MENUPAGE_H
