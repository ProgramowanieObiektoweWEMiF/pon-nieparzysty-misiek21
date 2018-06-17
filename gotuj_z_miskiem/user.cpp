#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include "admin.h"
#include "user.h"
#include "menu.h"


using namespace std;

user::user()
{
}
user::~user()
{
}


void user::podglad()
{
    ifstream plik(nazwa_pliku.c_str());
    cout << "Podaj nazwe pliku: ";                      cin>>nazwa_pliku;
    nazwa_pliku += ".txt";
    plik.open(nazwa_pliku.c_str(),ios::in);
    if(plik)
    {
        string tekst;
        while (getline(plik, tekst))
        {
            //plik<<tekst<<endl;
            cout<<tekst<<endl;
        }
        plik.close();
        getchar();
        logowanieU();
    }

}

void user::logowanieU()
{
    string linia;
    int wyborU;
    cout<< "Podaj login: " <<endl;
    cin >>login;

    if (login=="magda")
    {
            system("cls");
            cout <<" "<<endl;
            cout <<"Co chcesz zrobic, szefie? "<<endl;
            cout <<" "<<endl;
            cout <<"1. Przegladaj przepisy"<<endl;
            cout <<" "<<endl;
            cout <<"2. Podglad"<<endl;
            cout <<" "<<endl;
            cout <<"3. Cofnij"<<endl;
            cin>>wyborU;

            switch(wyborU)
            {
                case 1:
                    {
                        system("cls");
                        admin a4;
                        a4.przegladaj_liste();
                    }
                break;

                case 2:
                    {
                        system("cls");
                        user u3;
                        u3.podglad();
                    }
                break;
                case 3:
                    {
                        system("cls");
                        menu m3;
                        m3.obsluga();
                    }
                break;

                default: cout << "Nie ma takiej opcji. " << endl;
            }
            getchar(); //getchar();
            system("cls");

        }
    else {cout << "Zly login." << endl;}

}
