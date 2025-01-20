#include <iostream>
#include <vector>

using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> is_prime(n + 1, true);
    for (int i = 2; i <= n; i++)
        if (is_prime[i])
            for (int j = 2 * i; j <= n; j += i)
                is_prime[j] = false;
    return is_prime;
}

int main()
{
    int m, n;
    cin >> m >> n;

    bool abs = true;
    vector<bool> v = sieve(n + 1);
    for (int i = m; i <= n; ++i)
    {
        if (v[i])
        {
            cout << i << "\n";
            abs = false;
        }
    }

    if (abs)
    {
        cout << "Absent";
    }
}