// 출력결과 66

#include "L02_Example14.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example14::L02_Example14()
{
    cout << f(2, 3, 4) << " " << f(4, 3, 2) << " " << f(3, 2, 4) << endl;
}

int L02_Example14::f(int x, int y, int z)
{
    if (x > y)
    {
        if (x > z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }
    else
    {
        if (y > z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}
