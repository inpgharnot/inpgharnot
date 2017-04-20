#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main()
{
  for(;;)
  {
    int liczba,wynik,dalej;
    cout<<"Pomyslalem sobie liczbe od 0...100"<<endl;
    cout<<"Wpisz liczbe, zobaczymy czy zgadles: ";
    cin>>wynik;
    srand(time(NULL));
    liczba=rand()%100+1;

    if (liczba==wynik)
    {
      cout<<"Brawo! Pomyslelismy o tej samej liczbie :) "<<endl;
    }
    else
    {
      cout<<"Probuj dalej!"
      cout<<"Jesli chcesz grac dalej, wybierz 1. Jesli chcesz zakonczyc wbierz 2."
      cin>>dalej;
      switch (dalej)
      {
        case 1
          cout << "POWODZENIA" <<endl;
        break;
        case 2
        {
          cout<<"Do zobaczenia!"
        }return 0;
        break;
      }
    }
  }
  return 0;
}
