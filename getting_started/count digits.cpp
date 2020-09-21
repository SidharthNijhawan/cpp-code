#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    int n;
    cin >> n;
    int digit = 0;
    while (n != 0)
    {
        n = n / 10;
        digit++;
    }
    cout << digit << endl;
}
