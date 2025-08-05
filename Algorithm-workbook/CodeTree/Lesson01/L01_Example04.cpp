// 숫자로 이루어진 사각형

#include "L01_Example04.h"
#include <iostream>

using namespace std;

#define endl '\n'

L01_Example04::L01_Example04()
{
    int N, num = 0;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            ++num %= 10;

            if (num == 0)
                ++num;
            
            cout << num << ' ';
        }

        cout << endl;
    }
}
