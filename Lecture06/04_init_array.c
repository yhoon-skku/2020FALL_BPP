#include <stdio.h>

void print_array(int array[], int n)
{
  for(int i=0; i < n; i++)
    printf("%d ", array[i]);
  printf("\n");
  return;
}

void init_array(int array[], int n)
{
  for(int i=0; i<n; i++)
    array[i] = 0;
}

int main()
{
  int num[10];
  print_array(num, 10);
  init_array(num, 10);
  print_array(num, 10);
  return 0;
}

