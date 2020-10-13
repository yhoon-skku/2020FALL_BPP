#include <stdio.h>

int main()
{
  int grade = 0;
  printf("Enter a grade(0~4): ");
  scanf("%d", &grade);
  switch (grade) {
    case 4:
      printf("Excellent");
      break;
    case 3:
      printf("Good");
      break;
    case 2:
      printf("Average");
      break;
    case 1:
      printf("Poor");
      break;
    case 0:
      printf("Fail");
      break;
    default:
      printf("Illegal grade");
  }
  printf("\n");

  return 0;
}
