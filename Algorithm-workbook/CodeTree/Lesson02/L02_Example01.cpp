// 1부터 특정 수까지의 합

#include "L02_Example01.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example01::L02_Example01()
{
    int n = 0, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        sum += i;

    cout << sum / 10 << endl;
}
