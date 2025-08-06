// 함수를 이용한 369 게임

#include "L02_Example04.h"
#include <iostream>
#include <string>

using namespace std;

#define endl '\n'

L02_Example04::L02_Example04()
{
    int a, b;
    cin >> a >> b;

    cout << ThreeSixNine(a, b) << endl;
}

int L02_Example04::ThreeSixNine(int a, int b)
{
    int answer = 0;
    
    for (int num = a; num <= b; ++num)
    {
        string s = to_string(num);

        for (size_t i = 0; i < s.length(); ++i)
        {
            if (num % 3 == 0 or s[i] == '3' or s[i] == '6' or s[i] == '9')
            {
                answer++;

                break;
            }
        }
    }

    return answer;
}
