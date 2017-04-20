#include <iostream>

using namespace std;


int main()                                              //      MAIN
{
    int n, m;
    cin >> n >> m;
    int ** macierz;
    **macierz = new *int [m];
    for (int i = 0; i < m; ++i)
    {
        macierz[i] = new int (n);
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> macierz[m][n];
        }
        cout << endl;
    }


    for ( int i(0); i < m; ++i )
        delete [] macierz[i];
    delete [] macierz;

    return 0;
}
