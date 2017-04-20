#include <iostream>

using namespace std;


int main(void)                                              //      MAIN
{
    float suma=0,a;

    for (int i = 0; i < 6; ++i)
    {
        cin>>a;
        suma+=a;    
    }

    cout<<suma/6;
}
