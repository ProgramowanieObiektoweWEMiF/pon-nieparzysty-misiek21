#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include "menu.h"
#include "admin.h"
#include "user.h"
#include "gosc.h"

using namespace std;

menu::menu()
{
}
menu::~menu()
{
}

void menu::obsluga()
{
    for(;;)
{
    string hasloA;
    int wybor;

    cout << "Witaj smakoszu, co zamierzasz zrobic?" << endl;
    cout << " " << endl;
    cout << "1. Zaloguj jako uzytkownik" << endl;
    cout << " " << endl;
    cout << "2. Przegladaj jako gosc" << endl;
    cout << " " << endl;
    cout << "3. Zaloguj jako administrator" << endl;
    cout << " " << endl;
    cout << "4. Wylacz program" << endl;
    cout << " " << endl;
    cout << "Wybierz: " << endl;
    cin >> wybor;
    cout << " " << endl;

    switch(wybor)
    {
    case 1:
        {
            user u1;
            u1.logowanieU();

        }
        break;

    case 2:
        {
            gosc g1;
            g1.przegladaj_liste();
        }
        break;

    case 3:
        {
            admin a1;
            a1.logowanieA();

        }
        break;

    case 4:
        {
            exit(0);
        }
        break;

    default: cout << "Nie ma takiej opcji." <<endl;
    }
    getchar(); getchar();
    system("cls");
}
}
