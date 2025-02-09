#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        b ^= a ^= b ^= a %= b;
    }
    return a;
}

int main()
{
    int n, m;
    cin >> n >> m;

    if (m % n == 0)
    {
        cout << 1;
    }
    else
    {
        cout << n / gcd(n, m);
    }
}