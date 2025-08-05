// 최대공약수 구하기

#include "L01_Example06.h"
#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'

L01_Example06::L01_Example06()
{
    int n, m;
    cin >> n >> m;

    FindGCD(n, m);
}

void L01_Example06::FindGCD(int n, int m)
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
    
    cout << gcd << endl;
}
