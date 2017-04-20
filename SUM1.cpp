#include <iostream>

using namespace std;


int main()                                              //      MAIN
{
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            float A, B, C, Delta;
            cin >> A;
            cin >> B;
            cin >> C;
            Delta = (B * B) - (4 * A * C);

            if (Delta>0)
            cout << 2 << "\n";

            else if (Delta==0)
            cout << 1 << "\n";

            else
            cout << 0 << "\n";

        }
}
