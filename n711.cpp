#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> names(n);
    vector<int> sums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> names[i];
        int sum = 0;
        for (int j = 0; j < m; ++j)
        {
            int t;
            cin >> t;
            sum += t;
        }
        sums[i] = sum;
    }

    cout << names[distance(sums.begin(), min_element(sums.begin(), sums.end()))];
}