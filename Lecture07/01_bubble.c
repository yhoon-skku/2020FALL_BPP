#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void print_array(int array[], int n)
{
  printf("print_array\n");
  for(int i=0; i < n; i++)
    printf("%d ", array[i]);
  printf("\n");
  return;
}

void init_array(int array[], int n)
{
  srand(0);
  //srand(time(0));
  for (int i = 0; i < n; i++)
    array[i] = rand() % 1000;
}

void swap(int array[], int x, int y)
{
  int temp = array[x];
  array[x] = array[y];
  array[y] = temp;
}

void validate(int array[], int n)
{
  for(int i=0; i<n-1; i++) {
    if(array[i] > array[i+1]) {
      printf("ERROR!\n");
      return;
      // exit(1);
    }
  }
  printf("Correct\n");
}

void bubble_sort(int array[], int n)
{
  for(int i=0; i<n; i++)
    for(int j=0; j<n-1; j++)
      if(array[j] > array[j+1])
        swap(array, j, j+1);
}

int main()
{
  int size = 10000;  
  int numbers[size];

  init_array(numbers, size);
  bubble_sort(numbers, size);
  validate(numbers, size);

  return 0;
}
