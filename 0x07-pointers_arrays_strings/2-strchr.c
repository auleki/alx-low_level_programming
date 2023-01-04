#include "main.h"
/**
* _strchr - locates a character in a string
*
* @s: string to transverse
* @c: character to find if exists within string
* Return: a pointer to the first occurrence of the character
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}

