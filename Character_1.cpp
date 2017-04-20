#include <iostream>       / to se pisze ja, bo mogę

using namespace std;     /to pisze ja, bo Zuzka nie umie 

int main(void)
{
    int t,l,c;
    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> l;
        cin >> c;

        for (int p=0; p<l; p++)
        {
            for (int j=0; j<c; j++)
            {
                if(p%2==0)
                {
                    if( j%2==0)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                else
                if( j%2==0)
                {
                    cout<<".";
                }
                else
                {
                    cout<<"*";
                }
            }
            cout<<"\n";

        }

    }


}
