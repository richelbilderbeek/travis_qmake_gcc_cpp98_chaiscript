#include <iostream>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#include <chaiscript/chaiscript.hpp>
#pragma GCC diagnostic pop

double g(const double x)
{
  return std::sin(x);
}

int main()
{
  chaiscript::ChaiScript chai;
  chai.add(chaiscript::fun(&g), "g");
  const double d = chai.eval<double>("g(0.5);");
  std::cout << d << '\n';
}
