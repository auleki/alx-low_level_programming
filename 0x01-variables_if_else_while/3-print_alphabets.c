#include <stdio.h>

/**
* main - logs an alphabet in lowercase followed by the uppercase equivalent
*
* Return: returns 0 and exits the program
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
  putchar(ch);

for (ch = 'A'; ch <= 'Z'; ch++)
  putchar(ch);

putchar('\n');

return (0);
}
