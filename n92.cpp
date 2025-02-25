#include <iostream>

using namespace std;

int main()
{
    int S;
    cin >> S;

    int P = S / 6; // Количество журавликов, сделанных Петей и Сережей
    int K = 4 * P; // Количество журавликов, сделанных Катей

    cout << P << " ";
    cout << K << " ";
    cout << P;

    return 0;
}