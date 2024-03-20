#include "pch.h"
//#include "stdafx.h"


using namespace System;
using namespace std;


ref class Animals
{
public:
    int legs;

    void SetName(String ^nm)
    {
        name = nm;
    }

    String ^GetName()
    {
        return name;
    }

private:
    String ^name;
};

int main(array<System::String ^> ^args)
{
    Animals maimuta, leopard;

    maimuta.SetName("Maimuta");
    maimuta.legs = 2;
    leopard.SetName("Leopard");
    leopard.legs = 4;

    Console::WriteLine("Animal 1");
    Console::Write("Name:   ");
    Console::WriteLine(maimuta.GetName());
    Console::Write("Legs:  ");
    Console::WriteLine(maimuta.legs);
    Console::WriteLine();
    Console::WriteLine("Animal 2:");
    Console::Write("Name:  ");
    Console::WriteLine(leopard.GetName());
    Console::Write("Legs:  ");
    Console::WriteLine(leopard.legs);
    Console::WriteLine();
    return 0;
}