#ifndef LOGININ_H
#define LOGININ_H

#include <QWidget>

namespace Ui {
class LoginIn;
}

class LoginIn : public QWidget
{
    Q_OBJECT

public:
    explicit LoginIn(QWidget *parent = nullptr);
    ~LoginIn();

private:
    Ui::LoginIn *ui;
};

#endif // LOGININ_H
