#include "main.h"
#include <string.h>
/**
 * _puts - display string
 * @str: char to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int i;
	for (i = 0; i != (int)strlen(str); i++)
	{

		_putchar(str[i]);
	}
	_putchar('\0');
	_putchar('\n');
}
