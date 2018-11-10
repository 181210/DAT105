#include "signalclass.h"
#include "slotclass.h"
#include <QApplication>

int main()
{
    SignalClass *signalObject = new SignalClass();
    SlotClass *slotObject = new SlotClass();
    QObject::connect(signalObject, SIGNAL(mySignal(int)), slotObject, SLOT(mySlot(int)));

    signalObject->sendSignal();
}
