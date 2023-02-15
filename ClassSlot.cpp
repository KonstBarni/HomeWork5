#include "ClassSlot.h"
#include "ClassSnack.h"
#include <string>
#include <iostream>
using namespace std;

SnackSlot::SnackSlot()
{
    maxSnc = 0;
    numSnc = 0; 
    arrSnc = nullptr;
    Snack *sn = new Snack();
    Snack &snRef = (*sn);
}

SnackSlot::SnackSlot(unsigned short size)
{
    maxSnc = size;
    numSnc = 0;    
    arrSnc = new Snack*[maxSnc];
    for(int i = 0; i<maxSnc;i++)
    {
        Snack *sn = new Snack();
        arrSnc[i] = sn;
    }
}

SnackSlot::SnackSlot(const SnackSlot& otherArr)     //конструктор копирования
{
    maxSnc = otherArr.maxSnc;
    arrSnc = new Snack* [otherArr.maxSnc];
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
    delete[] arrSnc;
    maxSnc = _arr.maxSnc;
    arrSnc = new Snack* [_arr.maxSnc];
    for(int i =0; i<_arr.maxSnc; i++)
    {
        arrSnc[i] = _arr.arrSnc[i];
    }
    numSnc = _arr.numSnc;
    return *this;
} 

string SnackSlot::getSlotPos(unsigned short index)     //возвращает имя снека по индексу
{
    return arrSnc[index]->getSnackName();
}
unsigned short SnackSlot::getmaxSnc()                  //возвращает  мах.количество снеков в слоте
{
    return maxSnc;
}
void SnackSlot::setSlotSncName(const string& name, int index)       //сеттер, устанавливает имя снека по индексу
{
    arrSnc[index]->setSnackName(name);
}

void SnackSlot::addSnack(Snack (*snRef))     // Add snack in slot
{   
    string name = snRef->getSnackName();
    double cols = snRef->getSnackCols();
    double price = snRef->getSnackPrice();
    if((name != "nullptr") && (numSnc<maxSnc))
    {
        arrSnc[numSnc]->setAll(name, cols, price);
        numSnc++;
    }
    else
    {
        cout << "Слот заполнен!" << endl;
    }
}

void SnackSlot::printSlot()             //вывод в консоль всех элементов
{
    for(int i = 0; i< maxSnc; i++)
        arrSnc[i]->PrintField();
}

void SnackSlot::printInfo()            //выводит макс. количество снеков и сколько свободно
{
    cout<<"Макс. количество снеков: "<< maxSnc << "\t" << "Свободно мест: " << maxSnc - numSnc << endl;
}

SnackSlot::~SnackSlot(){
    delete[] arrSnc;
    cout<<"destrucktor Slot"<<endl;
}