// 출력결과 80

#include "L01_Example05.h"
#include <iostream>

using namespace std;

#define endl '\n'

L01_Example05::L01_Example05()
{
    int n = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == 1 or i == n or j == 1 or j == i or j == n - i + 1 or j == n)
                cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }
}
