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
    ~MenuPage();


private slots:
    void on_btnOpenNosto_clicked();

    void on_btnOpenSaldo_clicked();

    void on_btnCloseMenuPage_clicked();

    void on_btnOpenTapahtumat_clicked();

    void on_btnOpenTalletus_clicked();


    void on_btnOpenSiirto_clicked();

private:
    Ui::MenuPage *ui;
};

#endif // MENUPAGE_H
