#include <stdio.h>

void reverse_string()
{
  char c;
  scanf("%c", &c);
  if (c != '\n') {
    reverse_string();
    printf("%c", c);
  }
}

int main(void) 
{ 
  reverse_string();
}

