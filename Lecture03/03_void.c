#include <stdio.h>

void foo()
{
  printf("foo\n");
}

void bar(void)
{
  printf("bar\n");
}

int main()
{
  foo(1);
  bar(1);

  return 0;
}
