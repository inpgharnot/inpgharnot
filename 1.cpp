#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>

using namespace std;

char szuka(int n, char wybor1)      //tutaj funkcja ktora szuka.
{
  int nr_lini;
  string linia;                     //funkcja atoi().

  while(getline(ksiazka_telefoniczna,linia))
  {
    if(linia==wybor1)
    {
      switch 👎
      {
        case 1:
        {
          getline(ksiazka_telefoniczna,wynikszukania[n]);
          getline(ksiazka_telefoniczna,wynikszukania[n+1]);
          getline(ksiazka_telefoniczna,wynikszukania[n+2]);
          return *wynikszukania;
        }break;

        case 2:
        {
          getline(ksiazka_telefoniczna,wynikszukania[n-1]);
          getline(ksiazka_telefoniczna,wynikszukania[n]);
          getline(ksiazka_telefoniczna,wynikszukania[n+1]);
          return *wynikszukania;
        }break;

        case 3:
        {
          getline(ksiazka_telefoniczna,wynikszukania[n]);
          getline(ksiazka_telefoniczna,wynikszukania[n-1]);
          getline(ksiazka_telefoniczna,wynikszukania[n-2]);
          return *wynikszukania;
        }break;
      }
    }
  }

}


int main()
{
  for(;;)
  {
    cout<<"Witaj, mamy dla Ciebie, mala ksiazke odresowa. Jesli chcesz"<<endl;
    cout<<"zapisac nowy numer wraz z danymi wcisnij 1, jesli chcesz znalezc"<<endl;
    cout<<"jakis numer lub dane wcisnij 2. Wybierz 3 by zakonczyc."<<endl;
    char wybor;
    cin>>wybor;
    //wybor = getchar();  //cos tu nie działa, przyjrzyj sie temu.
    switch(wybor)
    {
      case '1':
      {
        char nazwisko, imie, numer;

        fstream ksiazka_telefoniczna;
        ksiazka_telefoniczna.open("ksiazka_telefoniczna.odt", ios::out|ios::app);
        cout<<endl<<"Podaj kolejno nastepujace dane, zatwierdzajac 'enterem': "<<endl;
        cout>>"Nazwisko: ";
        cin<<nazwisko;
        cout>>"Imie: ";
        cin<<imie;
        cout>>"Numer: ";
        cin<<numer;
        ksiazka_telefoniczna<<nazwisko<<endl;
        ksiazka_telefoniczna<<imie<<endl;
        ksiazka_telefoniczna<<numer<<endl;
        cout<<"Twoj numer wraz z danymi powinny zostac juz zapisane w pliku."<<endl;
        ksiazka_telefoniczna.close();
        system("cls");
      }
      break;
      case '2':
      {
        fstream ksiazka_telefoniczna;
        ksiazka_telefoniczna.open("ksiazka_telefoniczna.odt", ios::in);
        if (ksiazka_telefoniczna.good()==false )
        {
          cout<<endl<<"Ksiazka w ktorej chcesz szukac Twoich rekordow, nie istnieje"<<endl;
          exit(0);
        }
        else
        {
          cout<<endl<<"Po czym chcesz wyszukiwac danych? (nazwisko, imie, numer)"<<endl;
          char wybor1,wybor2;
          cin>>wybor1;
          int* wskaznik_na_wynik;
          char tablica[3];
          switch(wybor1)
          {
            case 'nazwisko':
            {
              cout<<"Podaj nazwisko ktorym chcesz wyszukiwac: ";
              cin>>wybor2;
              wskaznik_na_wynik=szuka(1,wybor2);           //tutaj nie wiem jak to zapisac
              for(int j=0;j<3;j++)
              {

              }
            }
            break;
            case 'imie':
            {
              cout<<"Podaj imie ktorym chcesz wyszukiwac: ";
              cin>>wybor2;
              wskaznik_na_wynik=szuka(2,wybor2);            //tutaj nie wiem jak to zapisac
            }
            break;
            case 'numer':
            {
              cout<<"Podaj numer ktorym chcesz wyszukiwac: ";
              cin>>wybor2;
              wskaznik_na_wynik=szuka(3,wybor2)               //tutaj nie wiem jak to zapisac
            }
            break;
          }


        }

        system("cls");
      }
      break;
      case '3':
      {
        exit(0);
      }
      break;
      default:
      cout<<"Zadna opcja nie zostala wybrana";
      break;
      system("cls");
    }
  }
  return 0;
}
