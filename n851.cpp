#include <iostream>
#include <string>

using namespace std;

string solove(int nb, int ng)
{
    string s = "";
    while (nb >= 1 && ng >= 2)
    {
        s += "BGG";
        --nb;
        ng -= 2;
    }

    return string(ng, 'G') + s + string(nb, 'B');
}

int main()
{
    int nb, ng;
    cin >> nb >> ng;

    cout << solove(nb, ng);
}
