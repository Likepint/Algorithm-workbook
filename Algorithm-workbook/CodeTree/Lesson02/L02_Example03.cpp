// 짝수이면서 합이 5의 배수인 수

#include "L02_Example03.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example03::L02_Example03()
{
    int n = 0, sum = 0;
    cin >> n;

    int copy = n;

    for (int i = 1; i <= 2; ++i)
    {
        sum += copy % 10;
        copy /= 10;
    }

    if (n % 2 == 0 and sum % 5 == 0)
        cout << "Yes" << endl;
    else cout << "No" << endl;
}
