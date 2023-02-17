#include <iostream>
#include <string>
#include "ClassSnack.h"
#include "ClassSlot.h"
#include "ClassMashine.h"

using namespace std;

int main()
{               /*проверка Snack*/
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
  slot->addSnack(Snickers);
  slot->printSlot();
  slot->printInfo();

  SnackSlot *slot2 = new SnackSlot(10);
  slot2->addSnack(Bounty);
  slot2->addSnack(Bounty);
  slot2->addSnack(Snickers);
  slot2->addSnack(Snickers);
  slot2->addSnack(Snickers);
  slot2->printSlot();
  slot2->printInfo();

            /*проверка vendingMashine*/
  VendingMashine *mashine = new VendingMashine(3);
  mashine->slotAdd(slot);
  mashine->slotAdd(slot2);
  //cout << "\n" << "in mashin: " << mashine->getSlotCount() << endl;
  //mashine->printAllSlots();
  cout << "Всего свободно: "<< mashine->getEmptySlotsCount()<< endl;

  delete mashine;
  delete slot;
  delete Bounty;
  delete Snickers;
  delete Mars;

  return 0;
}