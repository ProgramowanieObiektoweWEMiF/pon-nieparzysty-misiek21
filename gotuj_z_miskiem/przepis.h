#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>

using namespace std;

class przepis
{
    public:
        przepis();
        ~przepis();

        string nazwa, nazwa_pliku, skladniki;
        char receptura[255];
        int kcal;
        float czas;

        public: void dodaj_przepis();
};
