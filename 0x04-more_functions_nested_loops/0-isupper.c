#include "main.h"

/**
* _isupper - this checks if a character is an uppercase or not
* @c: takes in a character
* Return: is either 1 or 0 which means either true or false
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
