#include <stdio.h>

void print_string()
{
  char c;
  scanf("%c", &c);
  if (c != '\n') {
    printf("%c", c);
    print_string();
  }
}

int main(void) 
{ 
  print_string();
}

