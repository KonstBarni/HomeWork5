#pragma once
#include "ClassSlot.h"
#include "ClassSnack.h"
using namespace std;
class VendingMashine
{
    unsigned short maxSize;
    unsigned short slotCount;
    unsigned short sltSize;
    unsigned short mashine; 
    Snack **mashArr;
public:
    VendingMashine();
    VendingMashine(unsigned short);
    VendingMashine(const VendingMashine& otherMash);            //copy ctor
    VendingMashine& operator=(const VendingMashine& _mash);     // owerload operator =

    unsigned short getSlotCount();                              //возвращает slotCount
    void slotAdd();

    ~VendingMashine();
};