// 별 찍는 것을 5번 반복하기

#include "L01_Example01.h"
#include <iostream>

using namespace std;

#define endl '\n'

L01_Example01::L01_Example01()
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 10; ++j)
            cout << "*";
        
        cout << endl;
    }
}
