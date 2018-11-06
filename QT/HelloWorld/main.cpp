#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Hello World!");
    window.resize(250,150);
    window.show();

    return app.exec();
}
