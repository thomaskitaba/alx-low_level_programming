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
	int j;
	int len;
	int count;
	int number;
	int number_reached;

	count = 0;
	number_reached = 0;
	number = 1;
	len = (int)strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			count++;
			if (count == 1)
			{
				number_reached = i;
				number = s[i] - '0';
			}
			else
			{
				number *= 10;
				number += s[i] - '0';
			}
		}
	}
	if (count > 0)
	{
		for (j = 0; j < number_reached; j++)
		{
			if (s[j] == '-')
				number *= -1;
		}
		return (number);
	}
	else
		return (0);
}
