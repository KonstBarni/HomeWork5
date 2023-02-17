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
    SnackSlot **mashArr; 
    
public:
    VendingMashine();
    VendingMashine(unsigned short);
    VendingMashine(const VendingMashine& otherMash);            //copy ctor
    VendingMashine& operator=(const VendingMashine& _mash);     // owerload operator =

    unsigned short getSlotCount();                              //возвращает slotCount
    unsigned short getEmptySlotsCount();                        //возвращает кол-во пустых слотов
    SnackSlot getOneSlot(int n);                                //возвращает один слот по номеру

    void printAllSlots();
    void slotAdd(SnackSlot (*SnackSlot));

    ~VendingMashine();
};