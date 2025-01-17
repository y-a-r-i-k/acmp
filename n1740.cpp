#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n == 0)
    {
        cout << "Yes\n1 1";
        return 0;
    }
    else if (n == 1 || n == 2 || n == 4)
    {
        cout << "No";
        return 0;
    }

    if (n % 2 == 0 && n % 4 != 0)
    {
        cout << "No";
    }
    else if (n % 2 != 0)
    {
        cout << "Yes\n";
        long long x = ((n + 1) / 2), y = ((n - 1) / 2);
        cout << x << " " << y;
    }
    else if (n > 4 && n % 4 == 0)
    {
        cout << "Yes\n";
        long long x = ((n + 4) / 4), y = ((n - 4) / 4);
        cout << x << " " << y;
    }
}