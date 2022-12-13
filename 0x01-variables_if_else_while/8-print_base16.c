#include <stdio.h>

/**
* main - logs base16 numbers in lowercase
*
* Return: returns 0 and exits the program
*/
int main(void)
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