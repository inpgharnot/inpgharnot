#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()                                              //      MAIN
{

    double R1, d, Pole, zmienna;
    double liczba_p = 3141592654;

    for (int i = 0; i < 20; ++i)
    {

        cin >> R1;
        cin >> d;
        d = d/2;

        Pole = ( pow( R1 , 2) - pow( d , 2) ) * liczba_p;
        cout << setprecision(2) << fixed << Pole/1000000000 << endl;

    }
    return 0;
}
