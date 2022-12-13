#include <stdio.h>

/**
* main - logs an alphabet in lowercase
*
* Return: returns 0 and exits the program
*/
int main(void)
{
int limit;

limit = 10;

for (int i = 0; i < limit; i++)
{
printf("%d", i);
}

putchar(10);

return (0);
}