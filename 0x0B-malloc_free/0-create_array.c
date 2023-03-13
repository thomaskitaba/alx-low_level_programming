#include "main.h"
#include <stdlib.h>

/**
 * create_array -  writes the character c to stdout
 * @size: The size
 * @c: the character
 * Return: return 0 on success
 */
char *create_array(unsigned int size, char c)
{
char *temp;
int i;

temp = malloc(size);

if (temp == NULL || size == 0)
{
return (NULL);
}

for (i = 0; i < (int)size; i++)
{
*(temp + i) = c;
}
return (temp);
}