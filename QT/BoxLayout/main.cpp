#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    QVBoxLayout *mainLayout = new QVBoxLayout(&window);
    QLabel *text = new QLabel("Hello World!");
    QPushButton *button = new QPushButton("Ok");

    mainLayout->addWidget(text);
    mainLayout->addWidget(button);

    window.setWindowTitle("Hello World!");
    window.resize(250,150);
    window.show();

    return app.exec();
}
