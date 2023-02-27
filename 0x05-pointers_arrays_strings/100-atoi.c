#include "main.h"
#include <string.h>

/**
 * _atoi - conver string to number
 * @s: string to be converted
 * Return: number on success, 0 on error
 */
int _atoi(char *s)
{
	int i;
	int len;
	int count;
	int number;

	count = 0;
	number = 1;
	len = (int)strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			count++;
			if (count == 1)
			{
				number = s[i] - '0';
			}
			else
			{
				number *= 10;
				number += s[i] - '0';
			}
		}
	}
	if (count == 0)
	{
		return (0);
	}
	else
	{
		return (number);
	}
}
