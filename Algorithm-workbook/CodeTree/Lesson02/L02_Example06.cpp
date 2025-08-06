// 함수를 이용한 윤년 판별

#include "L02_Example06.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example06::L02_Example06()
{
    int year = 0;
    cin >> year;

    IsLeapYear(year);
}

void L02_Example06::IsLeapYear(int year)
{
    if (year % 4 == 0 and (year % 100 != 0 or year % 400 == 0))
        cout << "true" << endl;
    else cout << "false" << endl;
}
