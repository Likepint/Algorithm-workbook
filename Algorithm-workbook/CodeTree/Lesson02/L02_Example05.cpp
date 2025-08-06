// 함수를 이용한 소수 판별

#include "L02_Example05.h"
#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'

L02_Example05::L02_Example05()
{
    int a, b;
    cin >> a >> b;

    vector<bool> primes(b + 1, true);
    primes[0] = primes[1] = false;

    cout << FindPrime(primes, a, b) << endl;
}

int L02_Example05::FindPrime(vector<bool>& primes, int a, int b)
{
    int answer = 0;
    
    for (int i = 2; i * i <= b; ++i)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= b; j += i)
                primes[j] = false;
        }
    }

    for (int i = a; i <= b; ++i)
    {
        if (primes[i])
            answer += i;
    }

    return answer;
}
