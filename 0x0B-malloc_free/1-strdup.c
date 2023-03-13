#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  dupicates a string to a memory location
 * @str: The character to print
 * Return: return 0 on success
 */
char *_strdup(char *str)
{ 
	char *duplicate;
	int i, str_len;

	if (str == NULL)
	{
		return (0);
	}
	str_len = (int)strlen(str);
	duplicate = (char *)malloc(sizeof(str) + 1);

	if (duplicate == NULL)
	{
		return (0);
	}
	for (i = 0; i < str_len; i++)
	{
		*(duplicate + i) = *(str + i);
    if (i + 1 == str_len)
      *(duplicate + i + 1) = '\0';
	}

	
	return (duplicate);
}