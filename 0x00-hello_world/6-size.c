#include <stdio.h>

/**
* main - this returns the sizes of various data types in c
*
* Return: returns 0 and terminates the program
*/
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
printf("Size of float: %e byte(s)\n", sizeof(float));
return (0);
}
