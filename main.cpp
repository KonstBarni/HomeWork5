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
  Mars->setAll("MarsMax", 456.76, 855.676);
  Mars->PrintField();
  Snickers->PrintField();
  SnackSlot *slot = new SnackSlot(10);

  slot->addSnack(Bounty);
  slot->addSnack(Mars);
  slot->addSnack(Mars);
  slot->addSnack(Mars);
  slot->addSnack(Mars);
  slot->printSlot();
  slot->printInfo();

  //delete[] slot;
  delete Bounty;
  delete Snickers;
  delete Mars;

  return 0;
}