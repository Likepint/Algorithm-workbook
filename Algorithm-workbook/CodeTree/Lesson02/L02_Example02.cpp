// 정수의 최솟값

#include "L02_Example02.h"
#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'

L02_Example02::L02_Example02()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << min(min(a, b), c) << endl;
}
