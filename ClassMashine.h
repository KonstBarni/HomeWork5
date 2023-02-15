#pragma once
#include "ClassSlot.h"
#include "ClassSnack.h"
using namespace std;
class VendingMashine
{
    unsigned short maxSlots;
    unsigned short slotCount;
    VendingMashine **box;
public:
    VendingMashine();
    VendingMashine(unsigned short);

    ~VendingMashine();
};