// 함수를 이용해 직사각형 만들기

#include "L01_Example03.h"
#include <iostream>

using namespace std;

#define endl '\n'

L01_Example03::L01_Example03()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
            cout << 1;

        cout << endl;
    }
}
