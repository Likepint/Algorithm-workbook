// 함수를 이용한 온전수 판별

#include "L02_Example16.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example16::L02_Example16()
{
    int a, b, answer = 0;
    cin >> a >> b;

    for (int num = a; num <= b; ++num)
    {
        if (IsRightNumber(num))
            answer++;
    }

    cout << answer << endl;
}

bool L02_Example16::IsRightNumber(int num)
{
    if (num % 2 == 0)
        return false;

    if (num % 10 == 5)
        return false;

    if (num % 3 == 0 and num % 9 != 0)
        return false;

    return true;
}
