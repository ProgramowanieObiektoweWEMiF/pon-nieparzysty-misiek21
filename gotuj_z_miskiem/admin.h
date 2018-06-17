#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

class admin
{
        public: string nazwa, nazwa_pliku, receptura, skladniki;
        //char skladniki[255];
        int kcal;
        float czas;
    private:
        string  haslo, hasloA;

    public:
        admin();
        ~admin();



       public: void przegladaj_liste();
        void usun_usera();
        void usun_przepis();
        void dodaj_przepis();
        void logowanieA();
        void podglad();
};
