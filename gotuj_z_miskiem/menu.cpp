#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <conio.h>
#include "menu.h"
#include "admin.h"
#include "user.h"
#include "gosc.h"
#include "przepis.h"

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
    string hasloU;
    int wybor;

    cout << "Witaj, co zamierzasz zrobic?" << endl;
    cout << " " << endl;
    cout << "1. Rejestracja" << endl;
    cout << " " << endl;
    cout << "2. Zaloguj jako uzytkownik" << endl;
    cout << " " << endl;
    cout << "3. Zaloguj jako administrator" << endl;
    cout << " " << endl;
    cout << "4. Wylacz program" << endl;
    cout << " " << endl;
    cout << "Wybierz: " ;
    cin >> wybor;


    switch(wybor)
    {
    case 1:
        {
            gosc g1;
            g1.rejestruj();
        }
        break;

    case 2:
        {
            user u1;
            u1.logowanieU();
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
    getchar();
    system("cls");
}
}
