#pragma once
#include "ClassSlot.h"
#include "ClassSnack.h"
using namespace std;
class VendingMashine
{
    unsigned short maxSlots;
    unsigned short slotCount;
    unsigned short sltSize; 
    SnackSlot **mashine;
public:
    VendingMashine();
    VendingMashine(unsigned short);
    VendingMashine(const VendingMashine& otherMash);            //copy ctor
    VendingMashine& operator=(const VendingMashine& _mash);     // owerload operator =

    ~VendingMashine();
};