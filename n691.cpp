#include <iostream>
#include <fstream>
#include <regex>
#include <vector>
#include <string>
#include <algorithm>
#include <iso646.h>

using namespace std;

bool isLetter(char c)
{
    c += 'A' - 'a';
    string chars = "A, B, C, E, H, K, M, O, P, T, X, Y";
    if (find(chars.begin(), chars.end(), c) != chars.end())
    {
        return true;
    }
    return false;
}

bool isDigit(char c)
{
    string chars = "1234567890";
    if (find(chars.begin(), chars.end(), c) != chars.end())
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string label;
        cin >> label;

        if (isLetter(label[0]) and isDigit(label[1]) and isDigit(label[2]) and isDigit(label[3]) and isLetter(label[4]) and isLetter(label[5]))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}
