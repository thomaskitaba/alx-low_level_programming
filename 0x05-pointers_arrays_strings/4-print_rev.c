#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse order
 * @s: string to be reverse printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int *temp = s;
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		temp[i] = s[i];
	}
	s = temp;
}