#include <iostream>
#include <string>
#include "ClassMashine.h"
#include "ClassSlot.h"
#include "ClassSnack.h"
using namespace std;

VendingMashine::VendingMashine()
{

}
VendingMashine::VendingMashine(unsigned short num)
{
    slotCount = num;
}
