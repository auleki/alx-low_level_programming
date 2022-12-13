#include <stdio.h>
/**
* main - logs an alphabet in lowercase followed by a new line
*
* Return: returns 0 and exits the program
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if ((ch != 'e') && (ch != 'q'))
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
