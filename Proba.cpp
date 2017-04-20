#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<cstdlib>

using namespace std;

char szuka(int n,string wybor2 )      //tutaj funkcja ktora szuka.
{
  int nr_lini;
  string linia;
  fstream ksiazka_telefoniczna;
  ksiazka_telefoniczna.open("ksiazka_telefoniczna.odt", ios::in);          //funkcja atoi().

  while(getline(ksiazka_telefoniczna,linia))   //undeclared ksiazka_telefoniczna
  {
    if(linia==wybor2)                 //trzeba zrobić poprawny warunek
    {
      switch (n)
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
    int wybor;
    cout<<"Witaj, mamy dla Ciebie, mala ksiazke odresowa. Jesli chcesz"<<endl;
    cout<<"zapisac nowy numer wraz z danymi wcisnij 1, jesli chcesz znalezc"<<endl;
    cout<<"jakis numer lub dane wcisnij 2. Wybierz 3 by zakonczyc."<<endl;
    cin.ignore();
    wybor = getchar();  //cos tu nie działa, przyjrzyj sie temu.
    switch(wybor)
    {
      case 1:
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
      case 2:
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
          int wybor1,wybor2;
          cout<<endl<<"Po czym chcesz wyszukiwac danych? Nazwisko wcisnij 1, imie wcisnij 2,"<<endl;
          cout<<endl<<"numer wcisnij 3:  ";
          wybor1=getchar();
          int* wskaznik_na_wynik;
          char tablica[3];
          switch(wybor1)
          {
            case 1:
            {
              cout<<"Podaj nazwisko ktorym chcesz wyszukiwac, zatwierdz 'entrem': ";
              cin>>wybor2;
              wskaznik_na_wynik=szuka(wybor1,wybor2);           //tutaj nie wiem jak to zapisac
                cout<<"Nazwisko: "<<wskaznik_na_wynik[0]<<endl;
                cout<<"Imię:     "<<wskaznik_na_wynik[1]<<endl;
                cout<<"Numer:    "<<wskaznik_na_wynik[2]<<endl;
            }
            break;
            case 2:
            {
              cout<<"Podaj imie ktorym chcesz wyszukiwac: ";
              cin>>wybor2;
              wskaznik_na_wynik=szuka(wybor1,wybor2);            //tutaj nie wiem jak to zapisac
              cout<<"Nazwisko: "<<wskaznik_na_wynik[0]<<endl;
              cout<<"Imię:     "<<wskaznik_na_wynik[1]<<endl;
              cout<<"Numer:    "<<wskaznik_na_wynik[2]<<endl;
            }
            break;
            case 3:
            {
              cout<<"Podaj numer ktorym chcesz wyszukiwac: ";
              cin>>wybor2;
              wskaznik_na_wynik=szuka(wybor1,wybor2)               //tutaj nie wiem jak to zapisac
              cout<<"Nazwisko: "<<wskaznik_na_wynik[0]<<endl;
              cout<<"Imię:     "<<wskaznik_na_wynik[1]<<endl;
              cout<<"Numer:    "<<wskaznik_na_wynik[2]<<endl;
            }
            break;
          }


        }

        system("cls");
      }
      break;
      case 3:
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
