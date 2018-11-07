#include "helloworld.h"
#include "ui_helloworld.h"

HelloWorld::HelloWorld() {
    mainLayout = new QVBoxLayout(this);
    text = new QLabel("Hello World!");
    button = new QPushButton("Ok");

    mainLayout->addWidget(text);
    mainLayout->addWidget(button);

    QObject::connect(button, SIGNAL(clicked()), this, SLOT(close()));

    setWindowTitle("Hello World!");
    resize(250,150);
}

HelloWorld::~HelloWorld()
{

}
