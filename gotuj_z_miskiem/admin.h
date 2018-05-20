#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

class admin
{
    private:
        string  haslo, hasloA;

    public:
        admin();
        ~admin();

        void przegladaj_liste();
        void usun_usera();
        void usun_przepis();
        void dodaj_przepis();
        void logowanieA();
};
