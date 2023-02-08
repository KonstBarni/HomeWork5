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
  Snickers->PrintField();
  Snack *Mars = new Snack("Mars");
  Mars->PrintField();
  SnackSlot *slot = new SnackSlot(10);
  for(int i = 0; i <=10; ++i)
  {
    slot[i].printSlot();
  }
 

  delete slot;
  delete Bounty;
  delete Snickers;
  delete Mars;

  return 0;
}