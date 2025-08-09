// 출력결과 67

#include "L02_Example18.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example18::L02_Example18()
{
    cout << f(1) << " ";
    cout << f(11) << " ";
    cout << f(21) << " ";
    cout << f(31) << " ";
}

int L02_Example18::f(int n)
{
    if (n < 2)
        return 0;
    
    for (int d = n - 1; d > 1; d--)
    {
        if (n % d == 0)
            return 0;
    }
    
    return 1;
}
