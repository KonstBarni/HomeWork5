#include "ClassSlot.h"
#include "ClassSnack.h"
#include <string>
#include <iostream>
using namespace std;

SnackSlot::SnackSlot()
{
    unsigned short maxSnc = 0;
    unsigned short numSnc = 0; 
    arrSnc = nullptr;
}
SnackSlot::SnackSlot(unsigned short size)
{
    unsigned short maxSnc = size;
    unsigned short numSnc = 0;    
    arrSnc = new Snack[maxSnc];
    // for (int i=0; i<size; i++)
    // {
    //     arrSnc[i]->setAll("Snickers", 15.55, 56.66);
    // }

}
// SnackSlot::SnackSlot(unsigned short size, Snack *_arrSnc[])
// {
//     unsigned short maxSnc = size;
//     unsigned short numSnc = 0; 
//     *arrSnc = new Snack [maxSnc];
//     for(int i = 0; i< maxSnc; i++)
//         arrSnc[i]=_arrSnc[i];
//}
SnackSlot::SnackSlot(const SnackSlot& otherArr)     //конструктор копирования
{
    maxSnc = otherArr.maxSnc;
    arrSnc = new Snack [maxSnc];
    for(int i =0; i<otherArr.maxSnc; i++)
    {
        arrSnc[i] = otherArr.arrSnc[i];
    }
    numSnc = otherArr.numSnc;
}   

SnackSlot& SnackSlot::operator=(const SnackSlot& _arr)         // перегрузка оператора присваивания
{
    if(this == &_arr)
        return *this;
    maxSnc = _arr.maxSnc;
    arrSnc = new Snack [maxSnc];
    for(int i =0; i<_arr.maxSnc; i++)
    {
        arrSnc[i] = _arr.arrSnc[i];
    }
    numSnc = _arr.numSnc;
    return *this;
} 

string SnackSlot::getSlotPos(unsigned short index)     //геттер
{
    return arrSnc[index].getSnackName();
}
void SnackSlot::setSlotSncName(const string& name, int index)       //сеттер
{
    arrSnc[index].setSnackName(name);
}

void SnackSlot::addSnack(Snack slot)      // Add snack in slot
{   

    // string name = **slot[numSnc].getSnackName();    
    // double price, cols;
    // name = slot.getSnackName();
    // cols = slot.getSnackCols();
    // price = slot.getSnackPrice();
    // if((name == "nullptr") && ((numSnc-1)<maxSnc))
    // {
    //     slot[numSnc].setAll(name, cols, price);
    //     numSnc++;
    // }
    // else
    // {
    //     cout << "Слот заполнен!"<< endl;
    // }
    
}

void SnackSlot::printSlot()             //вывод в консоль одного элемента
{
    Snack slot;
    slot.PrintField();
}
SnackSlot::~SnackSlot(){
    delete[] arrSnc;
    cout<<"destrucktor Slot"<<endl;
}