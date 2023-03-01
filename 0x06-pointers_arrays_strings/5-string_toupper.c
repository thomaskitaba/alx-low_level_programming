#include "main.h"
#include <string.h>
/**
 * string_toupper - swaps string varibles
 * @str: char to be upper cased
 *
 * Return: nothing
 */
char *string_toupper(char * str)
{
	int i, str_len;

	str_len = (int)strlen(str);
	for (i = 0; i < str_len; i++)
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}