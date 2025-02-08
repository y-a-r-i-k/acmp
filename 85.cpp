#include <iostream>
#include <string>
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
    int N, M;
    cin >> N >> M;

    int gcd_value = gcd(N, M);

    string result(gcd_value, '1');

    cout << result << "\n";

    return 0;
}