#include "main.h"
#include <stdlib.h>
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
/**
 * argstostr -  turn arguments into string
 * @ac: The character to print
 * @av: pointr
 * Return: return char
 */
char *argstostr(int ac, char **av)
{
	int i, k, n;
	int av_len;
	char *temp;

	
	av_len = 0;
	if (ac <= 1 || av == NULL)
		return NULL;

	for (k = 0; k < ac; k++)
	{

		for (n = 0; n < (int)strlen(av[k]); n++)
		{
			av_len++;
		}
	}

	av_len = av_len + 1 + ac; /* null char and spaces*/
	temp = (char *)malloc(av_len);

	if (temp == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		
		_memcpy(temp, av[i], (unsigned int)strlen(av[i]));
		
	}
	
	
	return (temp);
}
