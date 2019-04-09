#include "Modexp.hpp"

namespace MAT561
{
  Num Modexp(const Num& a, const Num& x, const Num& m)
  {
    if(m == 1)
    {
      return 0;
    }

    Num result = 1;
    Num base = a % m;
    Num e = x;
    while(e > 0)
    {
      if(e % 2 == 1)
      {
        result = (result * base) % m;
      }
      e = e >> 1;
      base = (base * base) % m;
    }

    return result;
  }
}
