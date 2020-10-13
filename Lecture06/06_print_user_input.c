#include <stdio.h>
int main(void) 
{ 
  char c;
  scanf("%c", &c);
  while(c != '\n') {
    printf("%c", c);
    scanf("%c", &c);
  }
}

