#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vector<int> dp(n + 1, 0);
    dp[1] = v[1] - v[0];

    if (n > 2)
    {
        dp[2] = v[2] - v[0];
        for (int i = 3; i < n; ++i)
        {
            dp[i] = min(dp[i - 2], dp[i - 1]) + v[i] - v[i - 1];
        }
    }
    cout << dp[n - 1];
}