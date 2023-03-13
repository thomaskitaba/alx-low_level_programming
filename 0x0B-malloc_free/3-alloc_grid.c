#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  writes the character c to stdout
 * @width: The width
 * @height: the height
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
int i, n;
int **temp;

if (width <=0 || height <= 0)
	return (NULL);
temp = malloc(width * height);

if (temp == NULL)
	return (NULL);
for (i = 0, n = width * height; i < n; i++)
{
	*(temp + i) = 0;
}
return (temp);
}