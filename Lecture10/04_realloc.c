#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  int size = 1, count = 0;
  int* numbers = (int*) malloc(size * sizeof(int));

  while (1) {
    int n;
    scanf("%d", &n);
    if (n < 0)
      break;
    numbers[count++] = n;

    if (size == count) {
      size *= 2;
      //printf("before:\t%p\n", numbers);
      numbers = (int*) realloc(numbers, size * sizeof(int));
      //printf("after:\t%p\n", numbers);
      printf("Memory reallocation happens. Current Size: %d\n", size);
    }   
  }

  for (int i = 0; i < count; i++)
    printf("%d ", numbers[i]);
  printf("\n");

  return 0;
}
