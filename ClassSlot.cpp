#include "ClassSlot.h"
#include "ClassSnack.h"

SnackSlot::SnackSlot(unsigned short num)
{
    unsigned short maxSnc = num;
    unsigned short numSnc = 0;
    Snack **sl[] = Snack*[maxSnc]{Snack bn};
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
SnackSlot::~SnackSlot()
{
    delete[] sl;
}