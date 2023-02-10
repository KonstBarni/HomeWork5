#pragma once
#include "ClassSnack.h"

class SnackSlot
{
private:
    unsigned short maxSnc;
    unsigned short numSnc;
    Snack **slot[];                
public:
    SnackSlot(unsigned short num);

        /*операторы доступа*/
    Snack getSlotPos(unsigned short);
    void setSlotPos(short index);

    void addSnack(Snack);
    void printSlot();         // Вывод одного элемента слота

};


