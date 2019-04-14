#include "Num.hpp"
#include "Multinv.hpp"
#include "Modexp.hpp"

using namespace MAT561;

int main(int argc, char** argv)
{
  if(argc < 5)
  {
    std::cout << "Usage: RSADigitalSignature p q m e" << std::endl;
  }

  Num p(argv[1]);
  Num q(argv[2]);
  Num m(argv[3]);
  Num e(argv[4]);
  Num n = p * q;

  Num phi = (p - 1) * (q - 1);

  Num d;
  Multinv(e, phi, d);

  std::cout << "d = " << d << std::endl;

  Num md = Modexp(m, d, n);
  std::cout << "m^d = " << md << std::endl;

  return 0;
}
