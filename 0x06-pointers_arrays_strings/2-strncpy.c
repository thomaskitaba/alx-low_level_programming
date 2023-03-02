#include "main.h"
#include <string.h>

/**
 * _strncpy - swaps string varibles
 * @src: char to be copied
 * @dest: char to be cpied to
 * @n: number given as limit
 * Return: copied character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, src_len;

	src_len = (int)strlen(src);

	if (n > src_len)
	{
		n = src_len;
	}
	/* check if n > destination length here*/
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		
	}
_putchar('\n');
	return (dest);
}
