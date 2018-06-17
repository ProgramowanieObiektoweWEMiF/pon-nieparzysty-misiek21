#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include "przepis.h"
#include "menu.h"

using namespace std;

przepis::przepis()
{
}

przepis::~przepis()
{
}

 void przepis::dodaj_przepis()
{
    cout << "Podaj nazwe pliku: ";           cin>>nazwa_pliku;
    nazwa_pliku += ".txt";
    cout << "Podaj nazwe potrawy: ";         cin>>nazwa;
    cout << "Podaj skladniki potrawy: ";     cin>>skladniki;
    cout << "Podaj przepis: ";               cin>>receptura;
    cout << "Podaj liczbe kcal: ";           cin>>kcal;
    cout << "Podaj czas przygotowania: ";    cin>>czas;


    ofstream plik(nazwa_pliku.c_str());
    plik.open(nazwa_pliku.c_str(),ios::out);
    plik<<nazwa<<endl;
    plik<<skladniki<<endl;
    plik<<receptura<<endl;
    plik<<kcal<<endl;
    plik<<czas<<endl;
    plik.close();
}
