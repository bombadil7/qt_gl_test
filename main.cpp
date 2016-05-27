#include "mygl.h"
#include <QApplication>
#include <QtOpenGL/QGLFormat>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myGL w;

    if(!QGLFormat::hasOpenGL()) {
        std::cerr << "This system has no OpenGL support" << std::endl;
        return -1;
    }

    w.show();

    return a.exec();
}
