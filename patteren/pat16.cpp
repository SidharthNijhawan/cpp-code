#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int nsp = 2 * n - 3;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        int ival = 1;

        for (int j = 1; j <= nst; j++)
        {
            cout << (ival) << "\t";
            ival++;
        }

        for (int j = 1; j <= nsp; j++)
        {
            cout << ("\t");
        }

        ival = i < n ? ival - 1 : ival - 2;
        nst = i < n ? nst : nst - 1;
        for (int j = 1; j <= nst; j++)
        {
            cout << (ival) << "\t";
            ival--;
        }

        nst++;
        nsp -= 2;

        cout << endl;
    }
}