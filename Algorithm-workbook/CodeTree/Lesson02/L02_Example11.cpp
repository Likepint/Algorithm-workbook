// 출력결과 56
// 다음 함수의 리턴값이 5가 되는 양의 정수 n의 갯수

#include "L02_Example11.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example11::L02_Example11()
{
    int answer = 0;
    
    for (int i = 0; i < 15; ++i)
    {
        if (f(i) == 5)
            answer++;
    }

    cout << answer << endl;
}

int L02_Example11::f(int n)
{
    int a[15] = {1, 1, 2, 3, 2, 1, 4, 1, 1, 1, 2, 4, 2, 3, 4};
    int idx = 0;
    
    while (n < 15)
    {
        n += a[n];
        idx++;
    }
    
    return idx;
}
