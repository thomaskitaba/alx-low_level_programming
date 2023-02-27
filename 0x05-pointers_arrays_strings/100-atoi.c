#include "main.h"
#include <string.h>
#include <limits.h>
/**
 * _atoi - conver string to number
 * @s: string to be converted
 * Return: number on success, 0 on error
 */
int _atoi(char *s)
{
	int i, j, len, count, number, number_reached;

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
				number_reached = i, number = s[i] - '0';
			}
			else
			{
				if (s[i - 1] >= 48 && s[i - 1] <= 57)
				{
					number *= 10, number += s[i] - '0';
				}
				else
					break;
			}
		}
	}
	if (count > 0)
	{
		for (j = 0; j < number_reached; j++)
		{
			if (s[j] == '-')
			{
				number *= -1;
				if (number < INT_MIN)
					number = INT_MIN;
			}
		}
		return (number);
	}
	else
		return (0);
}
