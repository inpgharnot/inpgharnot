#include <iostream>       // to se pisze ja, bo mogę

using namespace std;     //to pisze ja, bo Zuzka nie umie 

int main(void)         //pisze komentatrz po raz 2
{
    int t,l,c;
    cin >> t;

    for (int i=0; i<t; i++)       //piszemy po raz pierwszy w dobrym repozytorium xd 
    {
        cin >> l;
        cin >> c;

        for (int p=0; p<l; p++) //ej byłam wtedy pierwsza to nie fair :(
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
