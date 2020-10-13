#include <stdio.h>

int main()
{
  int grade = 0;
  printf("Enter a grade(0~4): ");
  scanf("%d", &grade);
  switch (grade) {
    case 4:
    case 3:
    case 2:
    case 1:
      printf("Pass");
      break;
    case 0:
      printf("Fail");
      break;
    default:
      printf("Illegal grade");
      break;
  }
  printf("\n");

  return 0;
}
