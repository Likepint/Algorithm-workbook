// 출력결과 51

#include "L02_Example10.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example10::L02_Example10()
{
    cout << Lee(654321) + Lee(123345) + Lee(442211) + Lee(202104) << endl;
}

int L02_Example10::Lee(int x)
{
    int last = 10;

    while (x)
    {
        if (x % 10 > last)
        {
            return 0;
        }
        else
        {
            last = x % 10;
            x /= 10;
        }
    }

    return 1;
}
