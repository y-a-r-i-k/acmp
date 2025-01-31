#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int tRoom, tCond;
    cin >> tRoom >> tCond;

    string cmd;
    cin >> cmd;

    if (cmd == "freeze")
    {
        cout << min(tRoom, tCond);
    }
    else if (cmd == "heat")
    {
        cout << max(tRoom, tCond);
    }
    else if (cmd == "auto")
    {
        cout << tCond;
    }
    else if (cmd == "fan")
    {
        cout << tRoom;
    }
    return 0;
}