#include "helloworld.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    HelloWorld window;
    window.show();

    return app.exec();
}
