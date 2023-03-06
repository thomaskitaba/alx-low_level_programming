#include "main.h"
#include <string.h>
/**
 * _memcpy - Entry point for the program
 * @n: number of bytes to be copied
 * @src: src to be copied
 * @dest: destinatio memory location
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; i < (int)n; i++)
{
dest[i] = src[i];
}
return (dest);
}
