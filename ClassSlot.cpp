#include "ClassSlot.h"
#include "ClassSnack.h"

SnackSlot::SnackSlot(short nums)
{
    short NumSnk = nums;
    Snack **slot = new Snack*[NumSnk];
}
void SnackSlot::printSlot()
{
    Snack m;
    m.PrintField();
}
SnackSlot SnackSlot::SetSlot(int index, Snack _S)  //getter
    {
        SnackSlot sl[NumSnk];
        sl[index] = _S;
    }

void SnackSlot::addSlot()
{
    SnackSlot s[NumSnk];
    Snack m;
    s[0] = m;
    
}
        /*Перегрузка оператора присваивания*/
SnackSlot SnackSlot::operator=(SnackSlot sl)
{
    Snack m;
    SnackSlot sl[NumSnk];
     // освободить предварительно выделенную память
        if (NumSnk>0)
            delete[] sl;

        NumSnk = A.size;
        sl = new SnackSlot[NumSnk];

        for (int i=0; i<NumSnk; i++)
            sl[i]=A.sl[i];

        return *this;

}

SnackSlot::~SnackSlot()
{
}