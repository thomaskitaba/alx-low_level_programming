#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point for the program
 *
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