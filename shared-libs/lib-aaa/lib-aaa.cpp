#include "lib-aaa.hpp"

void bar()
{
  int * x;
  *x = 1337;
}

void aaa::foo()
{
  bar();
}
