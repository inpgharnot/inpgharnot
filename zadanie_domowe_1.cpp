#include <iostream>


float srednia(float* tablica, int ile);
int najblizsza(float* tablica, int ile,  float* tablica_pomocnicza);

using namespace std;


int main()                                              //      MAIN
{
    int ile ;
    cout<< "Podaj ile liczb chcesz wpisac: ";
    cin>> ile;
    cout<<""<<endl;
    float *tab;
    tab = new float[ile];


    float *tablica_pomocnicza;                      //możesz spróbować rozwiązać to inaczej !
    tablica_pomocnicza = new float[ile];            //tutaj, niepotrzebnie tworzysz nową tablice.


    for (int i=0 ; i<ile ; i++)
    {

        cout <<"Podaj "<< i+1<< " liczbe: ";
        cin >>tab[i];
        cout <<""<<endl;
    }

    cout <<"Srednia tych liczb wynosi: "<< srednia(tab, ile)<<endl;
    cout <<"Liczb/y najbardziej zblizone do sredniej to: "<<endl;
    int ile_nowa ;

    ile_nowa = najblizsza (float (* tab),int (ile), float (* tablica_pomocnicza));

    for (int i=0 ; i<ile_nowa ; i++)
    {
        cout << *tablica_pomocnicza<<endl;
    }




    delete[] tab;
    delete[] tablica_pomocnicza;                                            //cholernie wazne! nie zapominaj o tym!!!!
    return 0;
}

float srednia(float* tablica, int ile)                                      // FUNKCJA ŚREDNIA !!!
{
    float suma=0;
    for (int i=0; i<ile ; i++)
    {
        suma+= *tablica;
        tablica++;
    }
    return suma/ile;
}

int najblizsza (float (*tablica),int ile, float(** tablica_pomocnicza))          //FUNKCJA NAJBLIŻSZA !!!
{
    int licznik=1;

    float sr=srednia(tablica, ile) * srednia(tablica, ile) ;

    float roznica=(((*tablica) * (*tablica))-(sr * sr)) * (((*tablica) * (*tablica))-(sr * sr)) ;
    *tablica_pomocnicza = tablica;
    float roznica1;
    tablica++;

    for (int i=1; i<ile; i++)
    {
        roznica1 = (((*tablica) * (*tablica))-(sr * sr) ) * (( (*tablica) * (*tablica) )-(sr * sr));

        if (roznica1<roznica)
        {
            roznica=roznica1;
            *tablica_pomocnicza = tablica;
        }

        else if(roznica1==roznica)
        {
            licznik++;
            tablica_pomocnicza++;
            *tablica_pomocnicza = tablica;
        }
        tablica++;

    }

    return licznik;

}
