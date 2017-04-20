#include <iostream>

using namespace std;

int main(void)
{
    int p,q;
    cin>>p>>q;
    if((p==0 && q==0) || (p==1 && q==1))
    cout<< "0"<<endl;
    else if ((p==1 && q==0) || (p==0 && q==1))
    cout<<"1"<<endl;
}
