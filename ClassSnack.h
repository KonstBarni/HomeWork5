#pragma once
#include <string>
using namespace std;

class Snack
{
private:
    string nameChoc;
    double colories;
    double priceCh;
public:
    Snack();                                        //конструкторы
    Snack(const string& name);
    Snack(const string& name, double cols, double price);

    string getSnackName();                          //геттеры
    double getSnackCols();
    double getSnackPrice();

    void setSnackName(const string& name);          //сеттеры
    void setSnackCols(double cols);
    void setSnackPrice(double price);
    void setAll(const string& name, double cols, double price);

    void PrintField();                              //вывод в консоль всех полей
    
    Snack(const Snack& other);                      //конструктор копирования
    ~Snack();

};




