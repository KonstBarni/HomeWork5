#include "ClassSlot.h"
#include "ClassSnack.h"
#include <string>
#include <iostream>
using namespace std;

SnackSlot::SnackSlot()
{
    maxSnc = 10;        //размер по умолчанию для создания массива в машине
    countSnc = 0; 
    countLeft = 10;
    arrSnc = nullptr;
    Snack *sn = new Snack();
    Snack &snRef = (*sn);           //ссылка для передачи снека в слот
}

SnackSlot::SnackSlot(unsigned short size)
{
    maxSnc = size;
    countSnc = 0;
    countLeft = size;    
    arrSnc = new Snack*[maxSnc];
    for(int i = 0; i<maxSnc;i++)
        arrSnc[i] = new Snack();
}

SnackSlot::SnackSlot(const SnackSlot& otherArr)     //конструктор копирования
{
    maxSnc = otherArr.maxSnc;
    countSnc = otherArr.countSnc;
    countLeft = otherArr.countLeft;
    arrSnc = new Snack* [otherArr.maxSnc];
    for(int i =0; i<otherArr.maxSnc; i++)
    {
        arrSnc[i] = otherArr.arrSnc[i];
    }
}
            
SnackSlot& SnackSlot::operator=(const SnackSlot& _arr)         // перегрузка оператора присваивания
{
    if(this != &_arr)
        return *this;
    delete[] arrSnc;
    maxSnc = _arr.maxSnc;
    countSnc = _arr.countSnc;
    countLeft = _arr.countLeft;
    arrSnc = new Snack* [_arr.maxSnc];
    for(int i =0; i<_arr.maxSnc; i++)
    {
        arrSnc[i] = _arr.arrSnc[i];
    }
    return *this;
} 

string SnackSlot::getNameIndex(unsigned short index)     //возвращает имя снека по индексу
{
    return arrSnc[index]->getSnackName();
}
unsigned short SnackSlot::getMaxSnc()                  //возвращает  мах.количество снеков в слоте
{
    return maxSnc;
}
unsigned short SnackSlot::getCountSnc()                 //возвращает countSnc
{
    return countSnc;
}
unsigned short SnackSlot::getCountLeft()                //получает сколько осталось
{
    return countLeft;
}

void SnackSlot::setSlotSncName(const string& name, int index)       //сеттер, устанавливает имя снека по индексу
{
    arrSnc[index]->setSnackName(name);
}

void SnackSlot::addSnack(Snack (*snRef))     // Add snack in slot
{   
    string name = snRef->getSnackName();        //передача в слот по ссылке
    double cols = snRef->getSnackCols();
    double price = snRef->getSnackPrice();
    if((name != "nullptr") && (countSnc<maxSnc))
    {
        arrSnc[countSnc]->setAll(name, cols, price);
        countSnc++;
        countLeft--;
    }
    else
    {
        cout << "Слот заполнен!" << endl;
    }
}

void SnackSlot::printSlot()             //вывод в консоль всех элементов
{
    cout << "\n";
    for(int i = 0; i< maxSnc; i++)
        arrSnc[i]->PrintField();
}

void SnackSlot::printInfo()            //выводит макс. количество снеков и сколько свободно
{
    cout <<"Макс. количество снеков: "<< maxSnc << "\t" << "Свободно мест: " << countLeft << endl;
}

SnackSlot::~SnackSlot()
{
    delete[] arrSnc;
}