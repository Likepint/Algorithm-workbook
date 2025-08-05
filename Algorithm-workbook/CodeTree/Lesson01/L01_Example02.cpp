// 반복 출력하기

#include "L01_Example02.h"
#include <iostream>

using namespace std;

#define endl '\n'

L01_Example02::L01_Example02()
{
    int times = 0;
    cin >> times;

    for (int i = 0; i < times; ++i)
        cout << "12345^&*()_" << endl;
}
