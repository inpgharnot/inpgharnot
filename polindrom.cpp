#include <iostream>
#include <string>
#include <string>

using namespace std;


int main()                                              //      MAIN
{
    int n, j, rozmiar, licznik = 0, licznik1 = 0 ;

    cin >> n;

    string liczba, pomocnicza;

    for (int i = 0; i < n; ++i)  // ilość przypadków
    {
        cin >> liczba;

        char *tablica_znakow, *tablica_pomocnicza;

        tablica_znakow = new char [liczba.length()-1];       //dynamiczna alokacja 2 tablic znaków
        tablica_pomocnicza = new char [liczba.length()-1];

        j = rozmiar = liczba.length();

        liczba.copy(tablica_znakow, j-1, 0);   //skopiowanie stringa do tablicy znaków

        for (int i = 0; i < rozmiar/2; ++i) // przepisanie odwróconej liczby do nowej tablicy znaków
        {
            if(pomocnicza[i] == liczba[i])
            {
                licznik1++;
            }

        }

        if (licznik1 == j-1)
        {
            cout << liczba << licznik << endl;
        }
        else
        {
            licznik1 = 0;
        }


        delete [] tablica_znakow;
        delete [] tablica_pomocnicza;

        cout<< liczba << licznik<<endl;

        licznik = 0;   // wyzerowanie licznika
        licznik1 = 0;
        delete [] tablica_znakow;
        delete [] tablica_pomocnicza;
    }
    return 0;
}
