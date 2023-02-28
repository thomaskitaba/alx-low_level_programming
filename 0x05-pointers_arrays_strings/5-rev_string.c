#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, middle, len;
	char temp;

	len = (int)strlen(s);
	middle = len / 2;
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
