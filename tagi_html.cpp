#include <iostream>    //zrobione!
#include <algorithm>
#include <string>


using namespace std;

int main()
{
    string tagi;

    int wielkosc, dolne = 0, gorne = 0;

        //cin >> tagi;
    while(getline (cin,tagi))
    {
        wielkosc = tagi.length();

        for (int j = 0; j < wielkosc; ++j)
        {
            if (tagi[j] == '<')                  //ograniczamy
            {
                dolne = 1;
            }
            else if (tagi[j] == '>')
            {
                gorne = 1;
            }

            else if (dolne == 1 && gorne != 1)
            {
                tagi[j] = (char)toupper(tagi[j]);
            }
            else if (gorne == 1)
            {
                dolne = gorne = 0;
            }

        }
        cout << tagi <<endl;
        dolne = gorne = 0;

    }


    return 0;
}
