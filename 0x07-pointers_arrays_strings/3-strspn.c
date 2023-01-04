#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
*
* @s: string to search through
* @accept: substring to search for
* Return: Returns the number of bytes in the initial segment 
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
char *t = accept;

while (*s++)
{
while (*accept++)
{
if (*(s + 1) == *(accept - 1))
{
a++;
break;
}
}
if (!(*--accept))
{
break;
}
accept = t;
}
return (a);
}
