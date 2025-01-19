#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;

    for (int i = min(1, n); i <= max(1, n); ++i)
    {
        sum += i;
    }

    cout << sum;
}