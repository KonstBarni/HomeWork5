#pragma once
#include "ClassSnack.h"

class SnackSlot
{
private:
    unsigned short maxSnc;
    unsigned short numSnc;
    Snack *arrSnc; 
    SnackSlot();               
public:
    
    SnackSlot(unsigned short num);
    SnackSlot(unsigned short num, Snack _arrSnc[]);
    SnackSlot(const SnackSlot& other);       //конструктор копирования

    SnackSlot& operator=(const SnackSlot& slot);  // перегрузка =

        /*операторы доступа*/
    string getSlotPos(unsigned short);
    void setSlotSncName(const string&, int index);

    void addSnack(Snack);
    void printSlot();         // Вывод одного элемента слота
    ~SnackSlot();

};


