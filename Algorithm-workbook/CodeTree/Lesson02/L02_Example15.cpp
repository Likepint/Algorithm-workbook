// 사칙연산 함수

#include "L02_Example15.h"
#include <iostream>

using namespace std;

#define endl '\n'

L02_Example15::L02_Example15()
{
    int a, c;
    char o;

    cin >> a;
    cin.get();
    cin >> o;
    cin.get();
    cin >> c;

    Calculation(a, o, c);
}

void L02_Example15::Calculation(int a, char o, int c)
{
    if (o == '+')
    {
        cout << a << " + " << c << " = " << a + c << endl;
    }
    else if (o == '-')
    {
        cout << a << " - " << c << " = " << a - c << endl;
    }
    else if (o == '*')
    {
        cout << a << " * " << c << " = " << a * c << endl;
    }
    else if (o == '/')
    {
        cout << a << " / " << c << " = " << a / c << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
