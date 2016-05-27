#ifndef MYGL_H
#define MYGL_H

#include <QMainWindow>

namespace Ui {
class myGL;
}

class myGL : public QMainWindow
{
    Q_OBJECT

public:
    explicit myGL(QWidget *parent = 0);
    ~myGL();

private:
    Ui::myGL *ui;
};

#endif // MYGL_H
