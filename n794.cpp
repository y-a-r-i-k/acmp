#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    cout << n * (m / k + min(m, k - 1));
}