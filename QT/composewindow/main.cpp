#include "composewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ComposeWindow w;
    w.show();

    return a.exec();
}
