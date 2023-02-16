#include <iostream>
#include <string>
#include "ClassSnack.h"
#include "ClassSlot.h"
#include "ClassMashine.h"

using namespace std;

int main()
{               /*роверка Snack*/
  Snack *Bounty = new Snack("Bouny", 5, 35.56);
  Bounty->PrintField();
  Snack *Snickers = new Snack("mickecrs", 7, 56.78);
  Snickers->setSnackName("SuperSnickers");
  Snack *Mars = new Snack("Mars");
  Mars->setAll("MarsMax", 456.76, 855.676);
  Mars->PrintField();
  Snickers->PrintField();
  
 
                  /*проверка SnackSlot*/
  SnackSlot *slot = new SnackSlot(10);
  slot->addSnack(Bounty);
  slot->addSnack(Mars);
  slot->addSnack(Mars);
  slot->addSnack(Mars);
  slot->addSnack(Mars);
  // slot->printSlot();
  // slot->printInfo();

            /*проверка vendingMashine*/
  VendingMashine *mashine = new VendingMashine(5);
  cout<< "in mashin: " << mashine->getSlotCount() <<endl;

  //delete[] mashine;
  //delete[] slot;
  delete Bounty;
  delete Snickers;
  delete Mars;

  return 0;
}