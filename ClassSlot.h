#pragma once
#include "ClassSnack.h"

class SnackSlot
{
private:
    unsigned short maxSnc;
    unsigned short countSnc;
    unsigned short countLeft;
    Snack **arrSnc; 
                  
public:
    SnackSlot(); 
    SnackSlot(unsigned short size);
    SnackSlot(const SnackSlot& other);       //конструктор копирования

    SnackSlot& operator=(const SnackSlot& _arr);  // перегрузка =

        /*операторы доступа*/
    string getNameIndex(unsigned short);
    unsigned short getMaxSnc();
    unsigned short getCountSnc();                       //получает countSnc
    unsigned short getCountLeft();                      //полечает сколько пустых
    void setSlotSncName(const string&, int index);      //задает имя снека по индексу

    void addSnack(Snack(*Snack));       //добавить снек в слот
    void printSlot();                   // Вывод всех элементов слота
    void printInfo();                   //инфо о слоте

    ~SnackSlot();

};


