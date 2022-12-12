#include <stdio.h>
#include <unistd.h>

/**
* main - a function that print a phrase
*
* Return: Returns 1 this time, ends program still
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
