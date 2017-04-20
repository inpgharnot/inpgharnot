#include <iostream>
#include <math.h>

using namespace std;


long long int potega(int a, int b)
{
    if(b==0)
    return 1;
    else return a * potega(a, b-1);
}

int main()                                              //      MAIN
{
    int D;

    cin >> D;

    int a, b;
    for (int i = 0; i < D; ++i)
    {
        cin >> a >> b;
        a = a %10;
        cout << potega(a, b) %10 <<endl;
    }
    return 0;
}
