#include <iostream>
#include <string>
#include "ClassSnack.h"
using namespace std;

     /* конструкторы*/
Snack::Snack()
{
    string NameChoc = "null";
    Colories = 0;
    Price = 0;

}
Snack::Snack(string name)
{
    NameChoc = name;
    Colories = 225;
    Price = 15,5;
}
Snack::Snack(string name, double cols, double price)
{
    NameChoc = name;
    Colories = cols;
    Price = price;
}
    /* геттеры */
void Snack::getSnack(string name, double cols, double price)
{
    name = NameChoc;
    cols = Colories;
    price = Price;
}
void Snack::PrintField()
{
    cout << NameChoc << "\t" << Colories << "\t" << Price << endl;
}

    /*Конструктор копирования*/

Snack::Snack(const Snack &other)
    {
       NameChoc = other.NameChoc;
       Colories = other.Colories;
       Price = other.Price;
    }
    
Snack::~Snack()
{   
}