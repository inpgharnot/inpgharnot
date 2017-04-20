#include <iostream>
#include <math.h>


using namespace std;


int main()                                              //      MAIN
{

    char znak;
    int liczba1, liczba2;

    while ( cin >> znak >> liczba1 >> liczba2 )
    {

        switch ( znak )
        {

        case '+' :

            cout << liczba1 + liczba2 << endl;
            break;

        case '-':

            cout << liczba1 - liczba2 << endl;
            break;

        case '*':

            cout << liczba1 * liczba2 << endl;
            break;

        case '/':

            cout << liczba1 / liczba2 << endl;
            break;

        case '%':

            cout << liczba1 % liczba2 << endl;
            break;

        }
    }

    return 0;
}
