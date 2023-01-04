#include "main.h"
/**
* _memcpy - copies memory area
*
* @dest: pastes by in destination area
* @src: copies byte from memory area
* @n: bytes to be copied
* Return: the pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
