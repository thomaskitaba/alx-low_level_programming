#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _memset - Entry point for the program
 * @s: string to be manuplated
 * @b: value to be inserted to memory
 * @n: size of bytes to be inserted
 * Return: 0 on success, other values on error
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < (int)n; i++)
{
s[i] = b;
}
return (s);
}