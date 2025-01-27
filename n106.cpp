#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("INPUT.TXT");
    ofstream output("OUTPUT.TXT");

    int N;
    input >> N;

    int countH = 0;
    int countT = 0;

    // Подсчет монеток
    for (int i = 0; i < N; ++i)
    {
        int coin;
        input >> coin;
        if (coin == 0)
        {
            countH++;
        }
        else
        {
            countT++;
        }
    }

    // Минимальное количество переворотов
    int minFlips = min(countH, countT);
    output << minFlips << endl;

    input.close();
    output.close();

    return 0;
}