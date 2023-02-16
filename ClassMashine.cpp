#include <iostream>
#include <string>
#include "ClassMashine.h"
#include "ClassSlot.h"
#include "ClassSnack.h"
using namespace std;

VendingMashine::VendingMashine()        //default ctor
{
    slotCount = 0;
    maxSize = 0;
    mashine = 0;
    *mashArr = nullptr;
    SnackSlot *slt = new SnackSlot();
    sltSize = slt->getmaxSnc();
}
VendingMashine::VendingMashine(unsigned short num)      //param ctor
{
    slotCount = 0;
    maxSize = num;
    mashine = num;
    mashArr = new Snack*[maxSize];
    for(int i = 0; i < slotCount; i++)
    {
        Snack *slt = new Snack[sltSize];
        mashArr[i] = slt;
        for(int j = 0; j < sltSize; j++)
            {
                Snack *snk = new Snack();
                slt[j] = (*snk); 
            }
    }
}
VendingMashine::VendingMashine(const VendingMashine& otherMash)     // copy ctor
{
    slotCount = otherMash.slotCount;
    maxSize = otherMash.maxSize;
    mashine = otherMash.mashine;
    mashArr = new Snack* [otherMash.slotCount];
    for(int i =0; i<otherMash.slotCount; i++)
    {
        Snack *slt = new Snack();
        otherMash.mashArr[i] = slt;
            for(int j = 0; j< sltSize; j++)
            {
                Snack *snk = new Snack();
                slt[j] = (*snk);

            }
    }
}
VendingMashine& VendingMashine::operator=(const VendingMashine& _mash)      //owerload operator =
{
    if(this == &_mash)
        return *this;
    delete[] mashArr;
    slotCount = _mash.slotCount;
    maxSize = _mash.maxSize;
    mashArr = new Snack* [_mash.maxSize];
    for(int i = 0; i <_mash.maxSize; i++)
    {
        Snack *slt = new Snack[sltSize];
        _mash.mashArr[i] = slt;
        for(int j = 0; j < sltSize; j++)
        {
            Snack *snk = new Snack();
            slt[j] = (*snk);
        }
    }
    return *this;
}

unsigned short VendingMashine::getSlotCount()
{
    return slotCount;
}

void addSlot()
{

}
VendingMashine::~VendingMashine()
{
    delete[] mashArr;
}
