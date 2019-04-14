#pragma once

#include "Num.hpp"
#include <vector>

namespace MAT561
{
  struct EuclidStep
  {
    Num a, b, q, r;
  };

  void Euclid(const Num& a, const Num& b, std::vector<EuclidStep>& steps, 
    Num& gcd, Num& u, Num& v);
}