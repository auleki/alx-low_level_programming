#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes.
*
* @s: string to search through
* @accept: substring to search for
* Return: Returns the number of bytes in the initial segment
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
return (s + i);
j++;
}
i++;
}
return (NULL);
}
