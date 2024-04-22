#pragma once
#include "pch.h"

using namespace std;
using namespace System;

// Clasa pentru Parcare
public ref class Parcare {
private:
    int numarLocuri;

public:
    // Constructor
    Parcare(int locuri) {
        numarLocuri = locuri;
    }
    // Metoda publica pentru a obtine valoarea lui numarLocuri
    int getNumarLocuri() {
        return numarLocuri;
    }

    // Metoda pentru a adauga o masina in parcare
    void IntraInParcare() {
        if (numarLocuri > 0) {
            numarLocuri--;
            Console::WriteLine("Masina a intrat in parcare. Locuri ramase: " + numarLocuri);
        }
        else {
            Console::WriteLine("Nu mai sunt locuri disponibile in parcare.");
        }
    }

    // Metoda pentru a scoate o masina din parcare
    void IeseDinParcare() {
        numarLocuri++;
        Console::WriteLine("Masina a iesit din parcare. Locuri ramase: " + numarLocuri);
    }
};

// Clasa pentru Masina
public ref class Masina {
private:
    String^ numarInmatriculare;
    String^ marca;
    String^ culoare;
    String^ anFabricatie;
    int numarLocuri;
    double pret;

public:
    // Constructor
    Masina(String^ numar, String^ marcaMasina, String^ culoareMasina, String^ an, int locuri, double pretMasina) {
        numarInmatriculare = numar;
        marca = marcaMasina;
        culoare = culoareMasina;
        anFabricatie = an;
        numarLocuri = locuri;
        pret = pretMasina; // salvam valoarea pretului direct
    }
    // Metoda pentru a obtine numarul de inmatriculare al masinii
    String^ GetNumarInmatriculare() {
        return numarInmatriculare;
    }

    // Metoda pentru a obtine numarul de inmatriculare al masinii
    String^ GetCuloare() {
        return culoare;
    }

    // Metoda pentru a obtine marca masinii
    String^ GetMarca() {
        return marca;
    }

    // Metoda pentru a obtine anul fabricatiei
    String^ GetAnFabricatie() {
        return anFabricatie;
    }

    // Metoda pentru a obtine numarul de locuri
    int GetNumarLocuri() {
        return numarLocuri;
    }

    // Metoda pentru a obtine pretul masinii
    double GetPret() {
        return pret;
    }
};