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
  int size = 10;

  for (int i = 0; i < size; i++) {
    num[i] = rand() % 1000;
  }
  
  PrintArray(num, 10);

  int temp = num[size-1];
  // set the leftmost element with zero.
  int i = size;
  while (--i > 0)
    num[i] = num[i-1];
  num[0] = temp;

  PrintArray(num, 10);
}

