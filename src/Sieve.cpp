#include "Sieve.hpp"
#include <cstring>
#include <set>
#include <iostream>

namespace MAT561
{
  namespace Sieve
  {
    std::set<Num> primes;
    Num lastTested = 1;

    void ComputePrimesUpTo(const Num& n)
    {
      const int numToTest = 10000;
      bool* sieve = new bool[numToTest];
      while(n > lastTested)
      {
        Num nextTested = lastTested + numToTest;
        Num firstTest = lastTested + 1;
        memset(sieve, true, numToTest * sizeof(bool));

        for(const Num& p : primes)
        {
          if(firstTest % p == 0)
          {
            sieve[0] = false;
          }
          for(Num i = p - (firstTest % p); i < numToTest; i += p)
          {
            int idx;
            i.can_convert_to_int(&idx);
            sieve[idx] = false;
          }
        }

        for(Num u = firstTest; u <= nextTested; ++u)
        {
          int idx;
          (u - firstTest).can_convert_to_int(&idx);
          if(sieve[idx])
          {
            primes.insert(u);

            for(Num i = u - (firstTest % u); i < numToTest; i += u)
            {
              if(i + firstTest == u)
              {
                continue;
              }
              int idx2;
              i.can_convert_to_int(&idx2);
              sieve[idx2] = false;
            }
          }
        }

        lastTested = nextTested;
      }
      delete[] sieve;
    }

    const std::set<Num>& GetPrimes()
    {
      return primes;
    }
  }
}
