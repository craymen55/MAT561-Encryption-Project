#include "Num.hpp"

std::ostream& operator<<(std::ostream& lhs, const Num& rhs)
{
  std::vector<char> text;
  rhs.print(text);
  lhs << text.data();
  lhs.flush();
  return lhs;
}
