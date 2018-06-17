#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <conio.h>
#include <dirent.h>
#include "admin.h"
#include "menu.h"


using namespace std;


admin::admin()
{
}

admin::~admin()
{
}

 void admin::przegladaj_liste()
{

	int  i=1;
	DIR *dir;
	dirent *pdir; //wskaznik do struktury reprezentujacej plik
	cout<<"Wcisnij klawisz by wyswietlic liste przepisow: \n";
	getch();
	dir=opendir("."); //otwiera strumien katalogowy
	while(pdir=readdir(dir))
	{
		cout<<i<<"="<<pdir->d_name<<'\n';
		i++;
	}
	closedir(dir); //zamyka strumien katalogowy
	getch();
    }


void admin::usun_usera()
{
  string del2;
    cout<<"Ktorego usera chcesz usunac?"<<endl;
    cin>>del2;
    remove(( del2 + ".txt" ).c_str());
}

void admin::podglad()
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
    }

}

void admin::usun_przepis()
{
    string del;
    cout<<"Ktory przepis chcesz usunac?"<<endl;
    cin>>del;
    remove(( del + ".txt" ).c_str());

}

void admin::dodaj_przepis()
{
    //cin.sync();
    ofstream plik(nazwa_pliku.c_str());
    cout << "Podaj nazwe pliku: ";                      cin>>nazwa_pliku;
    nazwa_pliku += ".txt";
    plik.open(nazwa_pliku.c_str(),ios::out);

    cout << "Podaj nazwe potrawy: ";                    cin>>nazwa;
    plik<<nazwa<<endl;

    cout << "Podaj czas przygotowania w minutach: ";    cin>>czas;
    plik<<"Czas pzyrzadzenia w minutach: "<<endl;
    plik<<czas<<endl;

    cout << "Podaj liczbe kcal: ";                      cin>>kcal;
    plik<<"Kcal: "<<endl;
    plik<<kcal<<endl;

    cout << "Podaj skladniki potrawy: ";
    getline(cin>>ws, skladniki, '\n');
    plik<<"Skladniki: " <<endl;
    plik<<skladniki<<endl;

    cout << "Podaj przepis: ";
    getline(cin>>ws, receptura, '\n');
    plik<<"Przepis: "<<endl;
    plik<<receptura<<endl;

    cin.get();
    plik.close();
    system("cls");
    menu m3;
    m3.obsluga();

}

void admin::logowanieA()
{
system("cls");

    int wyborA;
    cout<< "Podaj haslo: " <<endl;
    cin >>hasloA;
    if(hasloA=="admin")
        {
            system("cls");
            cout <<" "<<endl;
            cout <<"Co chcesz zrobic, szefie? "<<endl;
            cout <<" "<<endl;
            cout <<"1. Dodaj przepis"<<endl;
            cout <<" "<<endl;
            cout <<"2. Usun przepis"<<endl;
            cout <<" "<<endl;
            cout <<"3. Przegladaj przepisy"<<endl;
            cout <<" "<<endl;
            cout <<"4. Usun uzytkownika"<<endl;
            cout <<" "<<endl;
            cout <<"5. Podglad"<<endl;
            cout <<" "<<endl;
            cout <<"6. Cofnij "<<endl;
            cin>>wyborA;

            switch(wyborA)
            {
                case 1:
                    {
                        system("cls");
                        admin a2;
                        a2.dodaj_przepis();
                    }
                break;

                case 2:
                    {
                        system("cls");
                        admin a3;
                        a3.usun_przepis();
                    }
                break;
                case 3:
                    {
                        system("cls");
                        admin a4;
                        a4.przegladaj_liste();
                    }
                break;
                case 4:
                    {
                        system("cls");
                        admin a5;
                        a5.usun_usera();
                    }
                    case 5:
                    {
                        system("cls");
                        admin a6;
                        a6.podglad();
                    }
                break;

                case 6:
                    {
                        system("cls");
                        menu m2;
                        m2.obsluga();
                    }
                break;

                default: cout << "Nie ma takiej opcji. " << endl;
            }
            getchar(); //getchar();
            system("cls");

        }
    else {cout << "Zle haslo." << endl;}
}
