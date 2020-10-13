#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main()
{
  srand(time(0));
  
  int min = INT_MAX;
  int num[10] = { };

  for (int i = 0; i < 10; i++) {
    num[i] = rand();
    //num[i] = rand() % 1000;
    printf("%d ", num[i]);
  }
  printf("\n");

  for (int i = 0; i < 10; i++)
    if (min > num[i])
      min = num[i];

  printf("min: %d\n", min);


  return 0;
}
