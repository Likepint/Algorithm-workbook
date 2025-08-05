// 최소공배수 구하기

#include "L01_Example09.h"
#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'

L01_Example09::L01_Example09()
{
    int n, m;
    cin >> n >> m;

    cout << (n * m) / FindGCD(n, m) << endl;
}

int L01_Example09::FindGCD(int n, int m)
{
    int gcd = 0;

    for (int divisor = min(n, m); divisor >= 1; --divisor)
    {
        if (n % divisor == 0 and m % divisor == 0)
        {
            gcd = divisor;

            break;
        }
    }

    return gcd;
}
