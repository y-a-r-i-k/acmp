/*
Time limit exceeded	on test 14;
*/

#include <iostream>
#include <time.h>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long mul(long long a, long long b, long long m)
{
    if (b == 1)
    {
        return a;
    }
    if (b % 2 == 0)
    {
        long long t = mul(a, b / 2, m);
        return (2 * t) % m;
    }
    return (mul(a, b - 1, m) + a) % m;
}

long long pows(long long a, long long b, long long m)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        long long t = pows(a, b / 2, m);
        return mul(t, t, m) % m;
    }
    return (mul(pows(a, b - 1, m), a, m)) % m;
}

bool ferma(int x)
{
    if (x == 2)
    {
        return true;
    }
    srand(time(NULL));
    for (int i = 0; i < 100; ++i)
    {
        long long a = (rand() % (x - 2)) + 2;
        if (gcd(a, x) != 1)
        {
            return false;
        }
        if (pows(a, x - 1, x) != 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;

    bool abs = true;
    for (int i = m; i <= n; ++i)
    {
        if (ferma(i))
        {
            abs = false;
            cout << i << "\n";
        }
    }
    if (abs == true)
    {
        cout << "Absent";
    }
}