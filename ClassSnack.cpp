#include <iostream>
#include <string>
#include "ClassSnack.h"
using namespace std;

     /* конструкторы*/
Snack::Snack()
{
    nameChoc = "nullptr";
    colories = 0;
    priceCh = 0;

}
Snack::Snack(const string& name)
{
    nameChoc = name;
    colories = 225;
    priceCh = 15,5;
}
Snack::Snack(const string& name, double cols, double price)
{
    nameChoc = name;
    colories = cols;
    priceCh = price;
}
    /* геттеры */
string Snack::getSnackName()
{
    return nameChoc;
}
double Snack::getSnackCols()
{
    return colories;
}
double Snack::getSnackPrice()
{
    return priceCh;
}

    /*сеттеры*/
void Snack::setSnackName(const string& name)
{
    nameChoc = name;
}
void Snack::setSnackCols(double cols)
{
    colories = cols;
}   
void Snack::setSnackPrice(double price)
{
    priceCh = price;
}   
void Snack::setAll(const string& name, double cols, double price)
{
    nameChoc = name;
    colories = cols;
    priceCh = price;
}   
    /*Вывод полей в консоль*/
void Snack::PrintField()
{
    cout << nameChoc << "\t" << colories << "\t" << priceCh  << endl;
}

    /*Конструктор копирования*/

Snack::Snack(const Snack &other)
    {
       nameChoc = other.nameChoc;
       colories = other.colories;
       priceCh = other.priceCh;
    }
     
Snack::~Snack()
{   
}