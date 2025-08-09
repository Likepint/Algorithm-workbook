// 함수를 이용한 합과 소수 판별

#include "L02_Example17.h"
#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'

L02_Example17::L02_Example17()
{
    int a, b, answer = 0;
    cin >> a >> b;

    vector<bool> Primes(b + 1, true);
    Eratosthenes(Primes);

    for (int num = a; num <= b; ++num)
    {
        if (Func(Primes, num))
            answer++;
    }

    cout << answer << endl;
}

void L02_Example17::Eratosthenes(std::vector<bool>& Primes)
{
    for (int i = 2; i * i <= Primes.size(); ++i)
    {
        if (Primes[i])
        {
            for (int k = i * i; k <= Primes.size(); k += i)
                Primes[k] = false;
        }
    }
}

bool L02_Example17::Func(std::vector<bool>& Primes, int num)
{
    if (Primes[num] and (num / 10 + num % 10) % 2 == 0)
        return true;

    return false;
}
