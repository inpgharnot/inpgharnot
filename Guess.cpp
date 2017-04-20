#include <iostream> //nie skończone, ogarnij jak rozwiązać.
#include <iomanip>

using namespace std;


int main(void)                                              //      MAIN
{
    float a, b, c;
    cin >> a;
    cin >> b;
    c=a*b;

    cout << setprecision(0) << fixed;
    cout<< c <<".0"<< endl;
}
