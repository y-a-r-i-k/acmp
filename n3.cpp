#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, a;
    cin >> n;
    
    a = n / 10;

    if (a * (a + 1) != 0) {
        cout << a * (a + 1) << "25";
    } else {
        cout << "25";
    }
}