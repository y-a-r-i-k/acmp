#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<string> orig(h);
    vector<string> res(h);

    for (int i = 0; i < h; ++i)
    {
        cin >> orig[i];
    }
    int cnt;

    for (int i = 0; i < h; ++i)
    {
        cin >> res[i];
    }

    cnt = 0;
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            if ((orig[i][j] == 'W' && res[i][j] == 'W') || (orig[i][j] == 'B' && res[i][j] == 'B'))
            {
                ++cnt;
            }
        }
    }
    cout << cnt << "\n";
}