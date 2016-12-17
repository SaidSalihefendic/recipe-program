#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void dodaj(ofstream& Ispis);

int main()
{
    ofstream Ispis;

    dodaj(Ispis); //za unos sa stojaka u frizider
    
    system("pause");

    return 0;
}

void dodaj(ofstream& Ispis)
{
    //Funkcija koja preuzima unos od korisnika za sadrzaj frizidera nakon kupovine TREBA SKONTATI KOLICINU DA SE UNESE
    Ispis.open("frizider.txt");

    string sastojak("Ovdje neki sastojak");

    cout << "Unesite svoje sastojke u frizider! Za prekid unosa, unesite X: " << endl;

    while(sastojak != "X" and sastojak != "x")
    {
        getline(cin, sastojak);

        if(sastojak != "" and sastojak != "x" and sastojak != "X")
            Ispis << sastojak << endl;
    }

    Ispis.close();

}
