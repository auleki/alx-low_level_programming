#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* main - returns a string indicating whether selected number is positive, odd, or negative
*
* Return: returns 0 and exits the program
*/
int main (void) 
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n > 0)
  {
        printf("%d is positive", n);
  } else if (n == 0) 
  {
        printf("%d is zero", n);
  }
  else 
  {
        printf("%d is negative", n);
  }  
  return 0;
}
