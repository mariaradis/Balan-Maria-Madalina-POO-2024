#include <pch.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace System;
using namespace std;


class Animals
{
public:
    int legs;

    void SetNume(string n)
    {
        nume = n;
    }

    string GetNume()
    {
        return nume;
    }

private:
    string nume;
};

int main()
{
    Animals maimuta,leopard;

    maimuta.SetNume("Maimuta");
    maimuta.legs = 2;
    leopard.SetNume("Leopard");
    leopard.legs = 4;

    cout << "Animals 1 - nume: " << maimuta.GetNume() << " legs: " << maimuta.legs << endl;
    cout << "Animals 2 - nume: " << leopard.GetNume() << " legs: " << leopard.legs << endl;

    return 0;
}