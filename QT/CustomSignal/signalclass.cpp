#include "signalclass.h"

SignalClass::SignalClass()
{
}


void SignalClass::sendSignal()
{
        emit mySignal(5);
}

