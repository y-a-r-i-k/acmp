#include <iostream>
#include <string>
#include <iso646.h>

using namespace std;

bool isLt(char c)
{
    return c == 'A' or c == 'b' or c == 'C' or c == 'E' or c == 'H' or c == 'K' or c == 'M' or c == 'O' or c == 'P' or c == 'T' or c == 'X' or c == 'Y';
}

bool isDg(char c)
{
    return c == '1' or c == '2' or c == '3' or c == '4' or c == '5' or c == '6' or c == '7' or c == '8' or c == '9' or c == '0';
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        if (s.size() == 6 and isLt(s[0]) and isDg(s[1]) and isDg(s[2]) and isDg(s[3]) and isLt(s[4]) and isLt(s[5]))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}