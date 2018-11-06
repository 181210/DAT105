#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;

    QLabel *text = new QLabel("Hello World!", &window); //Add keyboard shortcut
    QPushButton *button = new QPushButton("ok", &window);

    window.setWindowTitle("Hello World!");
    window.resize(250,150);
    window.show();

    return app.exec();
}
