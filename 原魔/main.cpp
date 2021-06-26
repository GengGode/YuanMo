#include "YuanMo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    YuanMo w;
    w.show();
    return a.exec();
}
