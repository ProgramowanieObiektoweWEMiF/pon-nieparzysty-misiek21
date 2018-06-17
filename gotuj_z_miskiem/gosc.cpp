#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include "admin.h"
#include "gosc.h"
#include "menu.h"


using namespace std;

gosc::gosc()
{
}
gosc::~gosc()
{
}



void gosc::rejestruj()
{
    ofstream plik2(login.c_str());
    cout << "Podaj login: " << endl;
    cin>>login;
    login += ".txt";
    plik2.open(("C:\\Users\Micha³\\Desktop\\Semestr 6\\Programowanie Obiektowe\\1\\gotuj_z_miskiem\\bin\\Debug\\users " + login + "").c_str(), ios::out); //
    plik2<<"..."<<endl;
    plik2.close();

}
