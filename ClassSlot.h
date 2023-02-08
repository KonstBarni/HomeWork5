#pragma once
#include "ClassSnack.h"

class SnackSlot
{
private:
    short NumSnk;
    Snack **slot ;    //number of snacs in the slot 
public:
    SnackSlot();
    SnackSlot(short numbers);

    SnackSlot SetSlot(int index, Snack _S); //setter slot
    void printSlot();
    void addSlot();

    SnackSlot operator=(SnackSlot sl); //перегрузка оператора присваивания


    ~SnackSlot();
};


