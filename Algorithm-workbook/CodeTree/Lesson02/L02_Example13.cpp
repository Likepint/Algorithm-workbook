// 출력결과 22

#include "L02_Example13.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example13::L02_Example13()
{
    int i, x = 1;
    
    for (i = 0; i < 6; i++)
    {
        x = f(x, -i);
        x = f(x, +i);
    }
    
    cout << x;
}

int L02_Example13::f(int x, int L)
{
    return 2 * L - x;
}
