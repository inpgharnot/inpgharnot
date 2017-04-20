#include <iostream>
#include <string>

using namespace std;


int main()                                              //      MAIN
{
    int n, ilosc_hasel = 3, rowne;
    string haslo;
    string *baza_danych;
    baza_danych = new string [ilosc_hasel];

    baza_danych[0]="Alabama@#1";
    baza_danych[1]="My2P@SSword";
    baza_danych[2]="abcddcba123#";


    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> haslo;

        for (int j = 0; j < ilosc_hasel; ++j)
        {
            if (haslo == baza_danych[j])
            {
                rowne++;
            }
        }

        if (rowne==1)
        {
            cout << "TAK" <<endl;
        }
        else if (rowne==0)
        {
            cout << "NIE" << endl;
        }
        rowne = 0;
    }
    delete [] baza_danych;
    return 0;
}
