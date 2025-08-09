// 그 계절, 그 날

#include "L02_Example21.h"
#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'

L02_Example21::L02_Example21()
{
    vector<int> Days = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> Season =
    {
        "",
        "Winter",
        "Winter",
        "Spring",
        "Spring",
        "Spring",
        "Summer",
        "Summer",
        "Summer",
        "Fall",
        "Fall",
        "Fall",
        "Winter"
    };
    
    int Y, M, D;
    cin >> Y >> M >> D;

    if (IsLeap(Y))
        Days[2]++;

    if (D > Days[M])
        cout << "-1" << endl;
    else cout << Season[M] << endl;
}

bool L02_Example21::IsLeap(int year)
{
    return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0) ? true : false;
}
