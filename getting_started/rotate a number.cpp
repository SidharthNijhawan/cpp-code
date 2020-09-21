#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    int nod = 0;
    int temp = n;
    while (temp != 0)
    {
        temp /= 10;
        nod++;
    }

    k = k % nod;
    if (k < 0)
        k += nod;

    int div = 1;
    int mult = 1;
    for (int i = 1; i <= nod; i++)
    {
        if (i <= k)
            div *= 10;
        else
            mult *= 10;
    }

    int quo = n / div;
    int rem = n % div;

    int r = rem * mult + quo;
    cout << (r) << endl;
}