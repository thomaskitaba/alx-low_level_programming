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
int i, j;
int **temp;

if (width <= 0 || height <= 0)
return (NULL);

temp = (int **)malloc(height * sizeof(int *));

if (temp == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
temp[i] = (int *)malloc(width * sizeof(int));
for (j = 0; j < width; j++)
{
temp[i][j] = 0;
}
}
return (temp);
}