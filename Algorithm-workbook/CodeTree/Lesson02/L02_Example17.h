#pragma once

#include <vector>

class L02_Example17
{
public:
    L02_Example17();

private:
    void Eratosthenes(std::vector<bool>& Primes);

    bool Func(std::vector<bool>& Primes, int num);
};
