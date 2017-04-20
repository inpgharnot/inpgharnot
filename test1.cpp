#include<iostream>   // tu coś nie działa, jest to zadanie "Half of the half"
#include<string>

using namespace std;

int main()
{
    int t,z;
    cin >> t;
    string slowo;

    for (int i=0; i<t; i++)
    {
        cin>>slowo;

        z=slowo.length();

        for (int j=1; j<z/2; j+=2)
        {
            slowo.erase(j,1);
        }

        cout << slowo <<endl;
        slowo.erase(0,z);
    }
    return 0;
}
