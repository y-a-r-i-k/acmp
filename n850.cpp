#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int minA = (a + 1) / 2;
    int minB = (b + 1) / 2;
    cout << max(minA, minB) << ' ' << min(a, b) << '\n';
}