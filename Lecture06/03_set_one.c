#include <stdio.h>
void set_one(int a) {
  a = 1;
}

void main() {
  int num;
  set_one(num);
  printf("%d\n", num);
}

