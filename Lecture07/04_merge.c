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

void swap(int array[], int x, int y)
{
  int temp = array[x];
  array[x] = array[y];
  array[y] = temp;
}

void merge_sort_recur(int array[], int start, int end)
{
  if(start >= end)
    return;
  if(start+1 == end) {
    if(array[start] > array[end]) {
      swap(array, start, end);
    }
    return;
  }
  merge_sort_recur(array, start, start + (end-start)/2 - 1);
  merge_sort_recur(array, start + (end-start)/2, end);
  int size = end - start + 1;
  int sorted_array[size];
  int curr=0, i, j;
  for(i=start, j=start+(end-start)/2; i<start+(end-start)/2 && j<=end; ) {
    if(array[i] <= array[j]) 
      sorted_array[curr++] = array[i++];
    else
      sorted_array[curr++] = array[j++];
  }
  while(i<start+(end-start)/2) {
    sorted_array[curr++] = array[i++];
  }
  while(j<=end) {
    sorted_array[curr++] = array[j++];
  }
  for(i=start; i<=end; i++)
    array[i] = sorted_array[i-start];
}

void merge_sort(int array[], int n)
{
  merge_sort_recur(array, 0, n-1);
}

int main()
{
  int size = 10000;  
  int numbers[size];

  init_array(numbers, size);
  merge_sort(numbers, size);
  //print_array(numbers, size);
  validate(numbers, size);

  return 0;
}
