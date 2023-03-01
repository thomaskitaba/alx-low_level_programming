#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * cap_string - swaps string varibles
 * @str: char to be swape
 *
 * Return: nothing
 */
char *cap_string(char * str)
{
	int i, j, count, str_len;
	char *temp;
	
	str_len = (int)strlen(str);
	count = 0;
	temp = malloc(sizeof(str));
	
	for(i = 0; i < str_len; i++)
	{
		if ((i == 0) && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		if (((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '.') || (str[i] == ',') || (str[i] == '!') || (str[i] == '?') || (str[i] == '"') || (str[i] == '(') || (str[i] == ')') || (str[i] == '}') || (str[i] == '}')) && ( str[i + 1] != str_len ))
		{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
				
		}
		
	}
	
	temp = str;
	for (j = 0; j < str_len; j++)
	{
		
		if ((str[j] == ' ') && (str[j - 1] != ' '))
		{
			temp[j - count] = str[j];
			
		}
		if ((str[j] == ' ' ) && (str[j - 1] == ' '))
		{
			count++;
		}
		if ((str[j] >= 97 && str[j] <= 122) || (str[j] >= 65 && str[j] <= 90))
		{
			temp[j - count] = str[j];
			
		}
		if (j + 1 == str_len)
		{
			temp[j - count + 1] = '\0';
		}
			
	}
	return (temp);
}