#include "main.h"
/**
 * print_to_98 - print natural numbers form n to 98;
 * @n: starting number
 */
void print_to_98(int n)
{
	int i, f, l;
	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			l = i % 10;
			if (i < 0)
				f = (i + l) / 10;
				_putchar(45);
			else
				f = (i - l) / 10;
			if (f != 0)
				_putchar('0' + f);
			_putchar('0' + l);
			if (i != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			l = i % 10;
			f = (i -  l) / 10;
			if (f != 0)
				_putchar('0' + f);
			_putchar('0' + l);
			if (i != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else
	{
		l = n % 10;
		f = (n - l) / 10;
		_putchar('0' + f);
		_putchar('0' + l);
	}
}	
