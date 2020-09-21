#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;

    if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b))
    {
        cout << ("true");
    }
    else
    {
        cout << ("false");
    }
}
