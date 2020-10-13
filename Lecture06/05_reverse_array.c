#include <stdio.h>

void print_array(int array[], int n)
{
  for(int i=0; i < n; i++)
    printf("%d ", array[i]);
  printf("\n");
  return;
}

void reverse_array(int array[], int size)
{
  int rev_array[size];
  for(int i=0; i<size; i++) {
    rev_array[i] = array[size-1-i];
    //rev_array[size-1-i] = array[i];
  }
  for(int i=0; i<size; i++) {
    array[i] = rev_array[i];
  }
}

int main()
{
  int num[10] = {1,2,3,4,5,6,7,8,9,10};
  print_array(num, 10);
  reverse_array(num, 10);
  print_array(num, 10);
  return 0;
}


