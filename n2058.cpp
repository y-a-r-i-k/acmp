#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    long double n, m, k;
    cin >> n >> m >> k;

    long double diagonal = ceil((min(n, m) - 1) / k);
    long double rest = ceil((max(n, m) - min(n, m)) / k);
    cout << (int)(diagonal + rest);
}