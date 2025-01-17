#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> points(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> points[i];
    }

    int a, b, k;
    cin >> a >> b >> k;

    int minShift = (a - 1) / k;
    int toVis = min(n, (b - 1) / k + 1 - minShift);
    int max_ = 0;
    for (int di = -1; di <= 1; di += 2)
    {
        int pos = 0 + di * minShift;
        pos %= n;
        pos += n;
        pos %= n;
        for (int i = 0; i < toVis; ++i)
        {
            max_ = max(max_, points[pos]);
            pos += di;
            pos %= n;
            pos += n;
            pos %= n;
        }
    }
    cout << max_ << "\n";
}