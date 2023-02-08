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

    void getSnack(string name, double cols, double price);

    void PrintField();
    
    Snack(const Snack& other);
    ~Snack();

};




