#include "ClassSlot.h"
#include "ClassSnack.h"

SnackSlot::SnackSlot()
{
    unsigned short naxSnc = 10;
    unsigned short numSnk = 0;
    Snack slot[maxSnc];
}

        /*методы доступа*/
// void SnackSlot::setSlotPos(short index, Snack sn)
// {
//     slot[index] = sn;
// }

void SnackSlot::printSlot()
{
    Snack slot;
    slot.PrintField();
}
