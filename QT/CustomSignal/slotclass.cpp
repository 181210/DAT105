#include <slotclass.h>
#include <iostream>

SlotClass::SlotClass()
{}

void SlotClass::mySlot(int)
{
    cout << "Signal received" << endl;
}
