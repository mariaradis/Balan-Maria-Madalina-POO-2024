#include "pch.h"
#include "proiectparcauto.h"
#include <vector>

using namespace System;
using namespace System::Collections::Generic;

// Clasa pentru colectia de masini
public ref class ColectieMasini {
private:
    List<Masina^>^ masini;

public:
    // Constructor
    ColectieMasini() {
        masini = gcnew List<Masina^>();
    }

    // Metoda pentru a adauga o masina in colectie
    void AdaugaMasina(Masina^ masina) {
        masini->Add(masina);
    }

    // Metoda pentru a obtine masinile din colectie
    List<Masina^>^ GetMasini() {
        return masini;
    }
};



// Functie pentru inregistrarea masinilor
// Functie pentru inregistrarea masinilor
void InregistreazaMasini(int numarMasini, ColectieMasini^ colectieMasini) {
    for (int i = 0; i < numarMasini; ++i) {
        Console::WriteLine("Introduceti datele despre masina " + (i + 1) + ":");

        // Citim numarul de inmatriculare
        Console::Write("Numarul de inmatriculare: ");
        String^ numarInmatriculare = Console::ReadLine();

        // Citim culoarea masinii
        Console::Write("Culoarea masinii: ");
        String^ culoare = Console::ReadLine();

        // Citim marca masinii
        Console::Write("Marca masinii: ");
        String^ marca = Console::ReadLine();

        // Citim anul de fabricatie al masinii
        Console::Write("Anul de fabricatie al masinii: ");
        String^ anFabricatie = Console::ReadLine();

        // Citim numarul de locuri
        Console::Write("Numarul maxim de locuri: ");
        int numarLocuri = Int32::Parse(Console::ReadLine());

        // Citim pretul masinii
        Console::Write("Pretul masinii: ");
        double pretMasina = Double::Parse(Console::ReadLine());

        // Cream un obiect Masina folosind datele citite
        Masina^ masina = gcnew Masina(numarInmatriculare, marca, culoare, anFabricatie, numarLocuri, pretMasina);

        // Adaugam masina in colectie
        colectieMasini->AdaugaMasina(masina);
    }
}

// Functie pentru sortarea colectiei dupa pretul masinii in ordine crescatoare
void SorteazaDupaPret(List<Masina^>^ masini) {
    for (int i = 0; i < masini->Count - 1; ++i) {
        for (int j = 0; j < masini->Count - i - 1; ++j) {
            // Accesam valorile de tip Double din pointerii System::Double^ folosind Convert::ToDouble
            double pret1 = Convert::ToDouble(masini[j]->GetPret());
            double pret2 = Convert::ToDouble(masini[j + 1]->GetPret());
            if (pret1 > pret2) {
                // Schimbam pozitiile masinilor in colectie
                Masina^ temp = masini[j];
                masini[j] = masini[j + 1];
                masini[j + 1] = temp;
            }
        }
    }
}


// Functia principala
int main() {
    ColectieMasini^ colectieMasini = gcnew ColectieMasini();

    // Cerem utilizatorului sa introduca numarul de masini de inregistrat
    Console::Write("Introduceti numarul de masini de inregistrat: ");
    String^ input = Console::ReadLine();
    int numarMasini = Int32::Parse(input);

    // Inregistram masinile
    InregistreazaMasini(numarMasini, colectieMasini);

    // Sortam masinile dupa pret
    List<Masina^>^ masini = colectieMasini->GetMasini();
    SorteazaDupaPret(masini);

    // Afisam detaliile masinilor
    for each (Masina ^ masina in masini) {
        Console::WriteLine("");
        Console::WriteLine("Numar de inmatriculare: " + masina->GetNumarInmatriculare());
        Console::WriteLine("Marca: " + masina->GetMarca());
        Console::WriteLine("Culoare: " + masina->GetCuloare());
        Console::WriteLine("An fabricatie: " + masina->GetAnFabricatie());
        Console::WriteLine("Numar de locuri: " + masina->GetNumarLocuri());
        Console::WriteLine("Pret: " + masina->GetPret());
        Console::WriteLine("");
    }

    Console::ReadLine(); // Asteptam sa se apese o tasta pentru a inchide consola

    return 0;
}