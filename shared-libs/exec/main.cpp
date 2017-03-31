#include <iostream>

#include "lib-aaa.hpp"
#include "lib-bbb.hpp"

int main()
{
  int x;
  std::cin >> x;

  if (x > 0)
    aaa::foo();
  else
    bbb::foo();

  return 0;
}
