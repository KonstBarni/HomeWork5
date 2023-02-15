#include <iostream>
#include <string>
#include "ClassMashine.h"
#include "ClassSlot.h"
#include "ClassSnack.h"
using namespace std;

VendingMashine::VendingMashine()        //default ctor
{
    slotCount = 0;
    maxSlots = 0;
    *mashine = nullptr;
    SnackSlot *slt = new SnackSlot();
    sltSize = slt->getmaxSnc();
}
VendingMashine::VendingMashine(unsigned short num)      //param ctor
{
    slotCount = num;
    maxSlots = 0;
   
    mashine = new SnackSlot*[maxSlots];
    for(int i = 0; i < maxSlots; i++)
    {
        SnackSlot *slt = new SnackSlot[sltSize];
        mashine[i] = slt;
    }
}
VendingMashine::VendingMashine(const VendingMashine& otherMash)     // copy ctor
{
    slotCount = otherMash.slotCount;
    maxSlots = otherMash.maxSlots;
    mashine = new SnackSlot* [otherMash.maxSlots];
    for(int i =0; i<otherMash.maxSlots; i++)
    {
        SnackSlot *slt = new SnackSlot();
        otherMash.mashine[i] = slt;
    }
}
VendingMashine& VendingMashine::operator=(const VendingMashine& _mash)
{
    if(this == &_mash)
        return *this;
    delete[] mashine;
    slotCount = _mash.slotCount;
    maxSlots = _mash.maxSlots;
    mashine = new SnackSlot* [_mash.maxSlots];
    for(int i =0; i<_mash.maxSlots; i++)
    {
        SnackSlot *slt = new SnackSlot();
        _mash.mashine[i] = slt;
    }
    return *this;
}

VendingMashine::~VendingMashine()
{
    delete[] mashine;
}
