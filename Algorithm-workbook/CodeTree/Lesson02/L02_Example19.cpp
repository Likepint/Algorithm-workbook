// 함수를 이용한 연속부분수열 여부 판단하기

#include "L02_Example19.h"
#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'

L02_Example19::L02_Example19()
{
    int n1, n2;
    cin >> n1 >> n2;
    
    vector<int> A(n1, 0);
    vector<int> B(n2, 0);

    for (auto& a : A)
        cin >> a;

    for (auto& b : B)
        cin >> b;

    FindCPS(A, B);
}

void L02_Example19::FindCPS(vector<int>& a, vector<int>& b)
{
    for (size_t i = 0; i < a.size(); ++i)
    {
        if (a[i] == b[0])
        {
            bool flag = true;
            
            for (size_t k = 1; k < b.size(); ++k)
            {
                if (i + k >= a.size() or a[i + k] != b[k])
                {
                    flag = false;
                    
                    break;
                }
            }

            if (flag)
            {
                cout << "Yes" << endl;
                
                return;
            }
        }
    }

    cout << "No" << endl;
}
