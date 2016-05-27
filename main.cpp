#include "mygl.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myGL w;
    w.show();

    return a.exec();
}
