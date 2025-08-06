// 출력결과 83

#include "L02_Example09.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example09::L02_Example09()
{
    int n = 10;
    
    cout << f(n) << endl;
}

int L02_Example09::f(int n)
{
    int s = 0;
    
    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < i; j += 2)
            s += i + j;
    }
    
    return s;
}
