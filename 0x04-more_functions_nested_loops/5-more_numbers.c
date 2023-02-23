#include "main.h"
/**
 * more_numbers - print 0 upto 14 x10
 *
 */
void more_numbers(void)
{
	int i;
	int f;
	int l;

	for (i = 0; i < 14; i++)
	{
		l = i % 10;
		f = (i - l) / 10;

		if (i > 9)
		{
			_putchar('0' + f);
		}
		_putchar('0' + l);
	}
	_putchar('\n');
}
