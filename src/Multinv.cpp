#include "Multinv.hpp"
#include "Euclid.hpp"

namespace MAT561
{
  bool Multinv(const Num& a, const Num& m, Num& result)
  {
    std::vector<EuclidStep> steps;
    Num gcd, u, v;

    Euclid(a, m, steps, gcd, u, v);

    if(gcd != 1)
    {
      return false;
    }

    if(u < 0)
    {
      u += m;
    }

    result = u;
    return true;
  }
}
