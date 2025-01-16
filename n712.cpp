#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long w, h, n;
    cin >> w >> h >> n;

    long long left = 0;
    long long right = max(w, h) * n;
    long long mid;

    while (left < right - 1)
    {
        mid = (left + right) / 2;
        if (double(mid / w) * double(mid / h) < n)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    cout << right << "\n";
}
