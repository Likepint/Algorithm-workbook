// 2021년 날짜의 유무

#include "L02_Example20.h"
#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'

L02_Example20::L02_Example20()
{
    vector<int> days = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    int month, day;
    cin >> month >> day;

    Check(days, month, day);
}

void L02_Example20::Check(const vector<int>& days, int month, int day)
{
    if (month >= days.size() or day > days[month])
        cout << "No" << endl;
    else cout << "Yes" << endl;
}
