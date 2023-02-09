#pragma once
#include <iostream>
#include <string>
using namespace std;

class Snack
{
private:
    string NameChoc;
    double Colories;
    double Price;
public:
    Snack();
    Snack(string name);
    Snack(string name, double cols, double price);

    string getSnackName();
    double getSnackCols();
    double getSnackPrice();

    void setSnackName(string name);
    void setSnackCols(double cols);
    void setSnackPrice(double price);

    void PrintField();
    
    Snack(const Snack& other);
    ~Snack();

};




