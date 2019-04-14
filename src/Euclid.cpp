#include "Euclid.hpp"
#include <iostream>

namespace MAT561
{
  void Euclid(const Num& a, const Num& b, std::vector<EuclidStep>& steps, 
    Num& gcd, Num& u, Num& v)
  {
    Num currA = a < 0 ? -a : a;
    Num currB = b < 0 ? -b : b;
    Num r = a % b;
    Num q = a / b;
    Num t1[2] = {1, 0};
    Num t2[2] = {0, 1};

    while(r != 0)
    {
      r = currA % currB;
      q = currA / currB; 

      if(r != 0)
      {
        Num temp = t1[0];
        t1[0] = t1[1];
        t1[1] = temp - q * t1[1];

        temp = t2[0];
        t2[0] = t2[1];
        t2[1] = temp - q * t2[1];
      }

      steps.push_back(EuclidStep({ currA, currB, q, r }));
      
      currA = currB;
      
      if(r != 0)
        currB = r;
    }

    gcd = currB;
    u = a < 0 ? -t1[1] : t1[1];
    v = b < 0 ? -t2[1] : t2[1];
  }
}