#include <stdio.h>

/**
* main - logs an alphabet in lowercase
*
* Return: returns 0 and exits the program
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
return (0);
}
