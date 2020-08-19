#include "LogTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogTest w;
    w.show();
    return a.exec();
}
