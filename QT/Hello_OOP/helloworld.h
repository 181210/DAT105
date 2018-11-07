#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

namespace Ui {
class HelloWorld;
}

class HelloWorld : public QWidget
{
    Q_OBJECT

public:
    explicit HelloWorld();
    ~HelloWorld();

private:
    QVBoxLayout *mainLayout;
    QLabel *text;
    QPushButton *button;

};

#endif // HELLOWORLD_H
