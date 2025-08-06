// 출력결과 46

#include "L02_Example08.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example08::L02_Example08()
{
    int x = 48;
    
    cout << f(x) << endl;
}

int L02_Example08::f(int x)
{
    int cnt = 0;
    
    while (x % 2 == 0)
    {
        x /= 2;
        cnt++;
    }
    
    return cnt;
}
