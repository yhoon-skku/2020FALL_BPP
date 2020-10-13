#include <stdio.h>

int main()
{
  int num = 0;
  if(num == 1,2,3) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  int a=1, b=2, c=5;
  printf("int a=1, b=2, c=3\n");

  int i = (a, b);
  // Below line will cause an error
  // int i = a, b;
  printf("int i = (a, b): %d\n", i);

  i = a, b;
  printf("i = a, b: %d\n", i);

  i = (a += 1, a + b);
  printf("i = (a += 1, a + b): %d\n", i);

  i = a += 1, a + b;
  printf("i = a += 1, a + b: %d\n", i);

  i = a, b, c;
  printf("i = a, b, c: %d\n", i);

  i = (a, b, c);
  printf("i = (a, b, c): %d\n", i);
}

