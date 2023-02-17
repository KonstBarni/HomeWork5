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
    mashArr = new SnackSlot*();
    SnackSlot *slt = new SnackSlot();       // получить размер по умолчанию
    sltSize = slt->getMaxSnc();
    const SnackSlot  &sltRef = (*slt); 
}
VendingMashine::VendingMashine(unsigned short num)      //param ctor
{
    slotCount = 0;
    maxSize = num;
    mashine = num;
    SnackSlot *slt = new SnackSlot();
    sltSize = slt->getMaxSnc();
    
    mashArr = new SnackSlot*[maxSize];
    for(int i = 0; i < maxSize; i++)
    {
        mashArr[i] = new SnackSlot(sltSize);
    } 
    SnackSlot const &sltRef = (*mashArr[0]);    
}

VendingMashine::VendingMashine(const VendingMashine& otherMash)     // copy ctor
{
    slotCount = otherMash.slotCount;
    maxSize = otherMash.maxSize;
    mashine = otherMash.mashine;
    mashArr = new SnackSlot * [maxSize];
    for (int i = 0; i < maxSize; ++i)
    { 
        mashArr[i] = new SnackSlot(otherMash.sltSize);
        mashArr[i] = otherMash.mashArr[i];
    }      
}
VendingMashine& VendingMashine::operator=(const VendingMashine& _mash)      //owerload operator =
{
    if(this != &_mash)
        return *this;
    delete[] mashArr;
    slotCount = _mash.slotCount;
    maxSize = _mash.maxSize;
    mashine = _mash.mashine;
    mashArr = new SnackSlot * [maxSize];
    for (int i = 0; i < maxSize; ++i)
    {
        mashArr[i] = new SnackSlot(_mash.sltSize);
        mashArr[i] = _mash.mashArr[i];
    }      
    return *this;
}

unsigned short VendingMashine::getSlotCount()       //get slotCount
{
    return slotCount;
}

unsigned short VendingMashine::getEmptySlotsCount()  //возвращает кол-во пустых мест
{
    unsigned short countAllSlot = 0;
    for(int i = 0; i < maxSize; i++)
        countAllSlot += mashArr[i]->getCountLeft();
    unsigned short total = (maxSize - slotCount)* countAllSlot;
    return total;
}

void VendingMashine::printAllSlots()
{
    cout << "\n";
    for(int i = 0; i < maxSize; i++)
        mashArr[i]->printSlot();     
}

SnackSlot VendingMashine::getOneSlot(int n)
{
    return (*mashArr[n]);
}
void VendingMashine::slotAdd(SnackSlot (*sltRef))
{   
    mashArr[0] = sltRef;
    if(mashine != 0)
    {
        mashArr[mashine] = sltRef;
        slotCount++;
    } 
    else if((mashine > 0) && (mashine < maxSize))
    {
        mashArr[mashine] = sltRef;
        slotCount++;
    }
    else
        cout << "Автомат запонен!" << endl;

}

VendingMashine::~VendingMashine()
{
    for(int i = 0; i <maxSize; i++)
        delete mashArr[i];
    delete[] mashArr;
}
