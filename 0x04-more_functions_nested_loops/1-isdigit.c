#include "main.h"

/**
* _isdigit - this checks if a character a digit
* @c: takes in an integer
* Return: is either 1 or 0 which means either true or false
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
