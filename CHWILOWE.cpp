#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <cstdlib>
#include <cstdio>

using namespace std;

#define ILOSC 10
#define Y 50
#define X 50

int main()
{

    cout << "podaj w jakich komórkach jest życie (podaj" << ILOSC<<" punktow), "<<endl;
    cout << "wspisując najpierw x potem y (x,y<100): "<< endl;


    int x,y;
    int tak = 0;
    int tablica_zycia[X][Y];
    int tablica_zycia_1[X][Y];
    int licznik = 0;


    for (int i = 0; i < X; ++i)                 //wpisanie 0 do tablicy
    {
        for (int j = 0; j < Y; ++j)
        {
            tablica_zycia[i][j] = 0;
            tablica_zycia_1[i][j] = 0;
        }
    }


    for (int i = 0; i < ILOSC; ++i)         //wpisanie które są jedynkami

    {
        cin >> x;
        cin >> y;
        tablica_zycia[x][y] = 1;
    }

    do
    {
        system("clear");
        system("clear");

        /*poniżej nastąpi sprawdznie, ile w danym momencie elementów żyje w tablicy. */

        for (int i = 1; i < X; ++i)           // x-owe wspolrzedne
        {
            for (int j = 1; j < Y; ++j)       // y-owe wspolrzedne
            {
                if (tablica_zycia[i][j] == 1)
                {
                    tak = 1;
                }
                else
                {
                    tak = 0;
                }
                for (int przypadki_poziomo = -1; przypadki_poziomo < 2; ++przypadki_poziomo)
                {
                    for (int przypadki_pionowo = -1; przypadki_pionowo < 2; ++przypadki_pionowo)
                    {
                        if(przypadki_pionowo == przypadki_poziomo)   //sprawdza czy nie jesteśmy na polu które właśnie sprawdzamy
                        {

                        }
                        else
                        {
                            if (tablica_zycia[i+przypadki_poziomo][j+przypadki_pionowo]==1)
                            {
                                licznik ++;
                            }
                        }

                    }
                }
                if(tak == 1)
                {
                    if( licznik == 2 || licznik ==3 )
                        tablica_zycia_1[i][j] = 1;
                    else
                        tablica_zycia_1[i][j] = 0;
                }
                else if (tak == 0)
                {
                    if (licznik == 3)
                    {
                        tablica_zycia_1[i][j] = 1;
                    }
                    else
                    {
                        tablica_zycia_1[i][j] = 0;
                    }
                }
                licznik = 0;
            }
        }

        /* nastepuje przepisanie tablic  */

        for (int i = 0; i < X; ++i)
        {
            for (int j = 0; j < Y; ++j)
            {
                tablica_zycia[i][j] = tablica_zycia_1[i][j];
                tablica_zycia_1[i][j] = 0;
            }
        }

        // wyświetlenie tablicy

        for (int i = 0; i < X; ++i)
        {
            for (int j = 0; j < Y; ++j)
            {
                if (tablica_zycia[i][j] == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << "_";
                }
            }
            cout <<endl;
        }


    }while(getchar() != 'k');
    return 0;
}
