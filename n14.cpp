#include <iostream>

using namespace std;

int nod(int a, int b)
{
    while (b)
    {
        b ^= a ^= b ^= a %= b;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a * b) / nod(a, b);
}