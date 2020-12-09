#ifndef TAPAHTUMATFORM_H
#define TAPAHTUMATFORM_H

#include <QWidget>

namespace Ui {
class TapahtumatForm;
}

class TapahtumatForm : public QWidget
{
    Q_OBJECT

public:
    explicit TapahtumatForm(QWidget *parent = nullptr);
    ~TapahtumatForm();

private:
    Ui::TapahtumatForm *ui;
};

#endif // TAPAHTUMATFORM_H
