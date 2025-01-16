#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; ++i)
    {
        char axis;
        int d;

        cin >> axis >> d;
        if (axis == 'X')
        {
            x += d;
        }
        else if (axis == 'Y')
        {
            y += d;
        }
        else if (axis == 'Z')
        {
            z += d;
        }
    }

    /*Выбрать ось с наименьшей координатой, дойти до нее, двигаться вдоль оси, пока все координаты не равны 0, 0, 0*/

    int _min = min(x, y);
    _min = min(_min, z);

    int l = 0;

    if (_min == x)
    {
        while (x != 0)
        {
            if (x > 0)
            {
                --x;
            }
            else if (x < 0)
            {
                ++x;
            }

            if (z == 0 || y == 0)
            {
                break;
            }
        }
        if (y == 0)
        {
            while (y != 0)
            {
                if (y > 0)
                {
                    --y;
                }
                else if (y < 0)
                {
                    ++y;
                }
            }
        }
    }
}