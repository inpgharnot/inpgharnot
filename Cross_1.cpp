#include<iostream>
// test inpg
using namespace std;

int main(void)
{
    int t;
    cin>>t;
    int n,m,ci,cj;

    for (int i = 0; i < t; ++i)
    {

        cin>>n;
        cin>>m;
        cin>>ci;
        cin>>cj;

        for (int i = 0; i < n; ++i)
        {
            if(ci-1==i)
            {
                for (int j = 0; j < m; ++j)
                {
                    cout <<"*";
                }
                cout<<"\n";
            }
            else
            {
                for (int j = 0; j < m; ++j)
                {
                    if(cj-1==j)
                    cout<<"*";
                    else
                    cout <<".";
                }
                cout<<"\n";
            }
        }
    }
}
