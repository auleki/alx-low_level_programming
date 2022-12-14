#include "main.h"

/**
* print_alphabet_x10 - prints a through z in lowercase ten times over
*/
void print_alphabet_x10(void)
{
char a = 'a';
int i;
for (i = 0; i < 11; i++)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
}
