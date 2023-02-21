#include "main.h"
/**
 * _islower - check if a chaharacter is lower or not
 * @c:  the character to be checked
 * Return: 0 on if lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('i');
		_putchar('s');
		_putchar('l');
		_putchar('o');
		_putchar('w');
		_putchar('e');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	else
	{
		return (0);
	}
}
