#pragma once
#include "ClassSnack.h"

class SnackSlot
{
private:
    short maxSnc;
    unsigned short numSnk;
    Snack slot[];    //number of snacs in the slot 
    
public:
    SnackSlot();

        /*операторы доступа*/
    SnackSlot getSlotPos(short index);
    void setSlotPos(short index, Snack Sn);

    SnackSlot SetSlot(int index, Snack _S); //setter slot
    void printSlot();

    ~SnackSlot() = default;
};


