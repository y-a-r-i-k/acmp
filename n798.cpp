#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, c;
    cin >> m >> n >> i >> j >> c;

    if (m % 2 == 0 || n % 2 == 0)
    {
        cout << "equal";
        return 0;
    }
    else if ((i + j + c) % 2 == 0)
    {
        cout << "black";
    }
    else
    {
        cout << "white";
    }
}