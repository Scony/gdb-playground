void f1()
{
  int * x;
  *x = 1337;
}

void f2()
{
  f1();
}

int main()
{
  f2();
  return 0;
}
