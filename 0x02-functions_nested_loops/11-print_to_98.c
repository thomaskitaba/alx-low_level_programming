#include "main.h"

/**
 * print_to_98 - print natural numbers form n to 98;
 * @n: starting number
 *
 */
void print_to_98(int n)
{
	int i;
	int k;

	if (n == 98)
	{
		_putchar((char)98);
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar((char)i);
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			_putchar((char)i);
		}
	}
