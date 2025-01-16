#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> res(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> res[i];
    }

    int winPoints = 0;
    for (int i = 0; i < n; ++i)
    {
        winPoints = max(winPoints, res[i]);
    }

    int winCnt = 0;
    int maxPtns = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        if (winCnt >= 1 && res[i] % 10 == 5 && res[i] > res[i + 1])
        {
            maxPtns = max(maxPtns, res[i]);
        }
        if (res[i] == winPoints)
        {
            ++winCnt;
        }
    }
    if (maxPtns == 0)
    {
        cout << "0" << "\n";
        return 0;
    }

    int better = 0;
    for (int i = 0; i < n; ++i)
    {
        if (res[i] > maxPtns)
        {
            ++better;
        }
    }
    cout << better + 1 << "\n";
    return 0;
}