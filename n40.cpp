// stupid but the simplest solution
// just to use pow from cmath

// does not works buy the way. Probably due to the size of long long and double types
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    cout << pow(2, n);
}