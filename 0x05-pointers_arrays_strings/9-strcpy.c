#include "main.h"
/**
 * _strcpy - checks for upper case
 * @dest: to be copied to
 * @src: to be copied from
 * * Return: pointer to dest, false otherwise
 */
char *_strcpy(char *dest, char *src)
{
int i;
int n;

for (i = 0, n = (int)strlen(src); i < n + 1; i++)
{
dest[i] = src[i];
}
return (dest);
}
