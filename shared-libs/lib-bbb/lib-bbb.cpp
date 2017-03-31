#include "lib-bbb.hpp"

void bar()
{
  int * x;
  *x = 1337;
}

void bbb::foo()
{
  bar();
}
