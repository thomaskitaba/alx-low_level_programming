#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 on success, other values on error
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int str_len, i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
  return (dest);
}