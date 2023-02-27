#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: string to be reversed
 * 
 */

void rev_string(char *s)
{
	int i;
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}