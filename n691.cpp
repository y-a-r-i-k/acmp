#include <iostream>
#include <fstream>
#include <regex>
#include <vector>
#include <string>

int main()
{
    std::ifstream inputFile("INPUT.TXT");
    std::ofstream outputFile("OUTPUT.TXT");

    if (!inputFile.is_open() || !outputFile.is_open())
    {
        std::cerr << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    int N;
    inputFile >> N;
    inputFile.ignore();

    std::vector<std::string> numbers(N);
    for (int i = 0; i < N; ++i)
    {
        std::getline(inputFile, numbers[i]);
    }

    std::regex pattern("^[ABCEHKMOPTXY]{3}[0-9]{3}[ABCEHKMOPTXY]{2}$");

    for (const auto &number : numbers)
    {
        if (std::regex_match(number, pattern))
        {
            outputFile << "Yes" << std::endl;
        }
        else
        {
            outputFile << "No" << std::endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
