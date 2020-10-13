#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void PrintArray(int array[], int size)
{
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main()
{
  srand(time(0));
  
  int min = INT_MAX;
  int num[10] = { };

  for (int i = 0; i < 10; i++) {
    num[i] = rand() % 1000;
  }

  PrintArray(num, 10);

  return 0;
}
