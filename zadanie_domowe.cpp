#include <iostream>
#include <math.h>

using namespace std;

float srednia(float *tab, int ile);
int  pokrewne(float *tab, int ile);

int main()
{
    int ile ;
  cout<< "Podaj ile liczb chcesz wpisac: ";
  cin>> ile;
  cout<<""<<endl;
  float *tab;
  tab = new float[ile];

  for (int i=0 ; i<ile ; i++)
  {

      cout<<"Podaj "<< i+1<< " liczbe: ";
      cin>>tab[i];
      cout<<""<<endl;
  }

  cout << "Srednia tych liczb wynosi: "<< srednia(tab,ile)<<endl;
  cout << "Liczba, ktora jest najblizsza sredniej liczb to: " <<tab[pokrewne(tab,ile)]<<endl;

return 0;
}


float srednia(int* tab, int ile)
{
    float suma = 0;
    for(int i=0 ; i<ile ; i++)
    {
        suma += *tab;
        tab++;
    }
    return suma/ile;
}

int pokrewne(float* tab, int ile)
{
    int ktore=0;
    float sr=srednia(tab, ile);
    float roz, roz_min=sqrt((sr-*tab)*(sr-*tab));
    for (int i=0 ; i<ile ; i++)
    {
        roz=sqrt((sr-*tab)*(sr-*tab));
        if (roz_min>roz)
        {
            roz_min = roz;
            ktore=i;
        }
    }
    return ktore;
}
