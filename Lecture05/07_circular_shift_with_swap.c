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

  for(int i = 0; i < size; i++) {
    num[i] = rand() % 1000;
  }
  
  PrintArray(num, 10);

  for(int i = size-1; i > 0; i--) {
    int temp = num[i];
    num[i] = num[i-1];
    num[i-1] = temp;
  }

  PrintArray(num, 10);
}

