#include <stdio.h>
#include "main.h"
/**
 * main - entry for fizz buzz
 *
 * Return: 0 on success, other integer on error
 */
int main(void)
{
	int i, f, l;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F'), _putchar('i'), _putchar('z'), _putchar('z');
			_putchar('B'), _putchar('u'), _putchar('z');
			_putchar('z');
			_putchar(32);
			continue;
		}
		if (i % 3 == 0)
		{
			_putchar('F'), _putchar('i');
			_putchar('z'), _putchar('z');
			_putchar(32);
			continue;
		}
		if (i % 5 == 0)
		{

			_putchar('B'), _putchar('u');
			_putchar('z'), _putchar('z');
			_putchar(32);
			continue;
		}

		l = i % 10;
		f = (i - l) / 10;
		if (i > 9)
			_putchar('0' + f);
		_putchar('0' + l), _putchar(32);
	}
	_putchar('\n');
	return (0);
}
