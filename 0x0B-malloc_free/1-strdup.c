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
		return (NULL);
	}
	str_len = (int)strlen(str);
	duplicate = (char *)malloc(sizeof(str) + sizeof(char) + 4);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < str_len + 1; i++)
	{
		duplicate[i] = str[i];
    
	}

	
	return (duplicate);
}