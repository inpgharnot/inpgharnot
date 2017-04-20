/*
BFN1 - Zabawne Dodawanie Piotrusia
Piotruś w klasie na lekcji matematyki bardzo się nudził i pani postanowiła dać mu dodatkowe zadanie do rozwiązania. Piotruś otrzymał kartkę, na której napisane były małe liczby. Piotruś ma za zadanie stwierdzić, czy dana liczba jest palindromem (tzn. czy czyta się ją tak samo od lewej do prawej strony, jak od prawej do lewej). Jeżeli nie, Piotruś powinien dodać do siebie wartość liczby czytanej od lewej do prawej oraz wartość liczby czytanej od prawej do lewej, sprawdzić, czy suma jest palindromem, i jeżeli nie -- kontynuować proces, aż otrzyma palindrom.

Przykładowo, mając daną liczbę 28, Piotruś stwierdzi, że nie jest ona palindromem i wykona dodawanie 28 + 82 = 110. Liczba 110 wciąż nie jest palindromem, zatem Piotruś wykona jeszcze dodawanie 110 + 011 = 110 + 11 = 121. Wynik tego dodawania jest już palindromem, więc obliczenia zostaną zakończone.

Twoim zadaniem jest napisać program, który dla każdej liczby rozważanej przez Piotrusia wypisze palindrom (wynik obliczeń Piotrusia), oraz liczbę dodawań prowadzących do wyniku.

Wejście
Pierwsza linia wejścia zawiera liczbę t (t <= 80), określającą ile liczb znajduje się na kartce Piotrusia. Każda z następnych t linii zawiera dokładnie jedną liczbę naturalną n (1 <= n <= 80), dla której Piotruś musi wykonać obliczenia.

Wyjście
Dla kolejnych liczb podanych na kartce wypisz po jednej linijce zawierającej dwie liczby całkowite oddzielone spacją. Pierwsza oznacza palindrom otrzymany przez Piotrusia, druga -- liczbę dodawań wykonanych, by go otrzymać.


link : http://pl.spoj.com/problems/BFN1/


ten program nie działa!
*/


#include <iostream>
#include <iostream>
#include <string>

using namespace std;

int odwraca(int pierwotna);
int dodaje(int poczatkowa, int polindrom);
void se_chodzi();


int main()
{
    int przypadki;

    cin >> przypadki;

    int podana_liczba, liczba_odwrotna, licznik = 0;

    for (int i = 0; i < przypadki; ++i)                                 //tyle liczb ile przypadków
    {
        cin >> podana_liczba;
        liczba_odwrotna = podana_liczba;

/*
        do
        {
            liczba_odwrotna = odwraca(podana_liczba);

            cout << "liczba odwrotna to: " << liczba_odwrotna << endl;


            if (liczba_odwrotna == podana_liczba)
            {
                cout << liczba_odwrotna << " " << licznik;
                licznik = 0;
            }
            else
            {
                podana_liczba = dodaje(podana_liczba, liczba_odwrotna);
                cout << "kolejna iteracja nr: " <<licznik << endl;
                cout << "nowa liczba to: "<< liczba_odwrotna << endl;

                licznik++;
            }
        } while (podana_liczba != liczba_odwrotna);
*/

    }

    return 0;
}

void se_chodzi()
{
    for (;;)
    {
        liczba_odwrotna = odwraca(podana_liczba);

        cout << "liczba odwrotna to: " << liczba_odwrotna << endl;


        if (liczba_odwrotna == podana_liczba)
        {
            cout << liczba_odwrotna << " " << licznik;
            licznik = 0;
            return 0;
        }
        else
        {
            podana_liczba = dodaje(podana_liczba, liczba_odwrotna);
            cout << "kolejna iteracja nr: " <<licznik << endl;
            cout << "nowa liczba to: "<< liczba_odwrotna << endl;

            licznik++;
        }
    }

}

int odwraca (int pierwotna)
{
    string do_zamiany, odwrocona;
    int wielkosc, odw;

    do_zamiany = to_string(pierwotna);                // zamiana int'a na string'a

    odw = wielkosc = do_zamiany.length();

    for (int i = 0; i < wielkosc; ++i)
    {
        do_zamiany[odw - 1] = odwrocona[i];
        odw--;
    }

    cout << odwrocona;    // usun, sprawdzenie

    return atoi(odwrocona.c_str());
}



int dodaje(int poczatkowa, int odwrotna)
{
    return poczatkowa + odwrotna;
}
