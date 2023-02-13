#include <iostream>
#include <string>
#include "ClassSnack.h"
#include "ClassSlot.h"

using namespace std;

int main()
{
  Snack *Bounty = new Snack("Bouny", 5, 35.56);
  Bounty->PrintField();
  Snack *Snickers = new Snack("mickecrs", 7, 56.78);
  Snickers->setSnackName("SuperSnickers");
  Snack *Mars = new Snack("Mars");
  Mars->setAll("Kamaz", 456.76, 855.676);
  Mars->PrintField();
  SnackSlot *slot = new SnackSlot(10);
  Snickers->PrintField();

  //slot->setSlotSncName("Super", 4);
  //cout<<slot[1].getSlotPos(3)<<endl;

  
  for(int i =0; i< 10; i++)
   {
     slot->printSlot();
   }

  delete Bounty;
  delete Snickers;
  delete Mars;
  //delete[] slot;

  return 0;
}