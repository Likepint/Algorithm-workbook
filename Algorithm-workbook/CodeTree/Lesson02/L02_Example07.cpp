// 출력결과 14

#include "L02_Example07.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example07::L02_Example07()
{
    int x = 12;
    
    cout << f(x) << endl;
}

int L02_Example07::f(int x)
{
    return (x / 2.5) * 3;
}
