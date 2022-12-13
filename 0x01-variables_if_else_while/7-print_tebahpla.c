#include <stdio.h>

int main (void) 
{
  char ch;
  for (ch = 'z'; ch >= 'a'; ch--) {
    putchar(ch);
  }
  return 0;
}