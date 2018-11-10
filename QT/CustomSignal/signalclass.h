#ifndef SIGNALCLASS_H
#define SIGNALCLASS_H

#include <QWidget>

class SignalClass : public QObject
{
    Q_OBJECT

public:
    SignalClass();
    ~SignalClass();
    void sendSignal();

private:
    void mySignal(int);
};

#endif // SIGNALCLASS_H
