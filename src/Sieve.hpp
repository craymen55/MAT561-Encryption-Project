#pragma once

#include "Num.hpp"
#include <set>

namespace MAT561
{
  namespace Sieve
  {
    void ComputePrimesUpTo(const Num& n);
    const std::set<Num>& GetPrimes();
  }
}