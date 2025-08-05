// 출력결과 20

#include "L01_Example08.h"
#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'

L01_Example08::L01_Example08()
{
    vector<vector<int>> a =
    {
        {2, 0, 1, 5},
        {0, 4, 1, 1},
        {1, 4, 0, 0}
    };

    int i, tot = 0;

    f(a, 1);
    f(a, 2);
    f(a, 0);

    for (i = 0; i < 3; i++)
        tot = tot + a[i][(i + 1) % 4];

    cout << tot << endl;
}

void L01_Example08::f(std::vector<std::vector<int>>& a, int b)
{
    int i;

    for (i = 0; i < 4; i++)
        a[b][i] = a[(b + 1) % 3][(i + 1) % 4];
}
