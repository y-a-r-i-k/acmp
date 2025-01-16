#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;

    vector<vector<bool>> pic1(h, vector<bool>(w, 0));
    for (int i = 0; i < h; ++i)
    {
        string s;
        cin >> s;
        for (int j = 0; j < w; ++j)
        {
            pic1[i][j] = (s[j] == '1');
        }
    }

    vector<vector<bool>> pic2(h, vector<bool>(w, 0));
    for (int i = 0; i < h; ++i)
    {
        string s;
        cin >> s;
        for (int j = 0; j < w; ++j)
        {
            pic2[i][j] = (s[j] == '1');
        }
    }

    string vals;
    cin >> vals;

    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            if (pic1[i][j] == 0 && pic2[i][j] == 0)
            {
                cout << vals[0];
            }
            else if (pic1[i][j] == 0 && pic2[i][j] == 1)
            {
                cout << vals[1];
            }
            else if (pic1[i][j] == 1 && pic2[i][j] == 0)
            {
                cout << vals[2];
            }
            else if (pic1[i][j] == 1 && pic2[i][j] == 1)
            {
                cout << vals[3];
            }
        }
        cout << "\n";
    }
}