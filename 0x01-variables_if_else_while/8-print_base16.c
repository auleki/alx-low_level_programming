#include <stdio.h>

int main (void) 
{
	
  char x = '0';

  while (x <= '9') 
  {
    putchar(x);
    x++;
  }

  char z = 'a';

  while (z <= 'f') 
  {
    putchar(z);
    z++;
  }

  putchar(10);
  
	return 0;
}