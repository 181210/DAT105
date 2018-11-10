#ifndef SLOTCLASS_H
#define SLOTCLASS_H

#include <QWidget>

using namespace std;

class SlotClass : public QObject
{
    Q_OBJECT
 public:
    SlotClass();
public slots:
    void mySlot(int);
};

#endif // SLOTCLASS_H
