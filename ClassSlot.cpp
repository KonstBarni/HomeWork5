#include "ClassSlot.h"
#include "ClassSnack.h"
#include <string>
using namespace std;

SnackSlot::SnackSlot(unsigned short num)
{
    unsigned short maxSnc = num;
    unsigned short numSnc = 0;    
    Snack **slot = new Snack* [maxSnc];
}

Snack SnackSlot::getSlotPos(unsigned short num)     //геттер
{
    Snack slot[num];
    return slot[num];
}
void SnackSlot::setSlotPos(short index)             //сеттер
{
    Snack slot[index];
    slot[index].setSnackName("Name");
}

void SnackSlot::addSnack(Snack sn)      // Add snack in slot
{   
    std::string name;
    double price, cols;
    name = sn.getSnackName();
    cols = sn.getSnackCols();
    price = sn.getSnackPrice();
    //Snack slot[numSnc]->setAll(name, cols, price);
    numSnc++;
}

void SnackSlot::printSlot()             //вывод в консоль одного элемента
{
    Snack slot;
    slot.PrintField();
}