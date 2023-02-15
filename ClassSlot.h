#pragma once
#include "ClassSnack.h"

class SnackSlot
{
private:
    unsigned short maxSnc;
    unsigned short numSnc;
    Snack **arrSnc; 
                  
public:
    SnackSlot(); 
    SnackSlot(unsigned short size);
    SnackSlot(const SnackSlot& other);       //конструктор копирования

    SnackSlot& operator=(const SnackSlot& _arr);  // перегрузка =

        /*операторы доступа*/
    string getSlotPos(unsigned short);
    unsigned short getmaxSnc();
    void setSlotSncName(const string&, int index);

    void addSnack(Snack(*Snack));       //добавить снек в слот
    void printSlot();                   // Вывод всех элементов слота
    void printInfo();                   //инфо о слоте
    
    ~SnackSlot();

};


