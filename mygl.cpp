#include "mygl.h"
#include "ui_mygl.h"

myGL::myGL(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myGL)
{
    ui->setupUi(this);
}

myGL::~myGL()
{
    delete ui;
}
