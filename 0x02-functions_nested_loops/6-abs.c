#include "main.h"

/**
* _abs - gives the absolute value of a value
* @n: a number
*
* Description: a value is given and and absolute
* value is returned
*
* Return: the absolute value of a value
*/

int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
