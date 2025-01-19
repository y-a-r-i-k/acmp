#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> dp(n + 1, 0);
    vector<int> dp0(n + 1, 0);

    dp[1] = k - 1;

    for (int i = 2; i <= n; ++i)
    {
        dp[i] = (dp[i - 1] + dp0[i - 1]) * (k - 1);
        dp0[i] = dp[i - 1];
    }

    cout << dp[n] + dp0[n];
}