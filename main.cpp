#include <iostream>
#include <string>
#include "ClassSnack.h"
#include "ClassSlot.h"

using namespace std;

int main()
{
  Snack *Bounty = new Snack("Bouny", 5, 35.56);
  Bounty->PrintField();
  Snack *Snickers = new Snack("Snickecrs", 7, 56.78);
  Snickers->setSnackName("SuperSnickers");
  Snickers->PrintField();
  Snack *Mars = new Snack("Mars");
  Mars->PrintField();
  SnackSlot *slot1 = new SnackSlot(10);
  slot1->printSlot();
  //slot1->addSnack(Mars);


  delete slot1;
  delete Bounty;
  delete Snickers;
  delete Mars;

  return 0;
}