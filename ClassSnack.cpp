#include <iostream>
#include <string>
#include "ClassSnack.h"
using namespace std;

     /* конструкторы*/
Snack::Snack()
{
    string NameChoc = "nullptr";
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
string Snack::getSnackName()
{
    return NameChoc;
}
double Snack::getSnackCols()
{
    return Colories;
}
double Snack::getSnackPrice()
{
    return Price;
}
    /*сеттеры*/
void Snack::setSnackName(string name)
{
    NameChoc = name;
}
void Snack::setSnackCols(double cols)
{
    Colories = cols;
}   
void Snack::setSnackPrice(double price)
{
    Price = price;
}      
    /*Вывод полей в консоль*/
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