// 두 수의 거듭제곱

#include "L02_Example12.h"
#include <iostream>
#include <cmath>

using namespace std;

#define endl '\n'

L02_Example12::L02_Example12()
{
    int a, b;
    cin >> a >> b;

    cout << Power(a, b) << endl;
}

long long L02_Example12::Power(int a, int b)
{
    // { // for
    //     long long answer = 1;
    //
    //     for (int i = 0; i < b; ++i)
    //         answer *= a;
    //
    //     return answer;
    // }
    
    { // algorithm pow()
        return pow(a, b);
    }
}
