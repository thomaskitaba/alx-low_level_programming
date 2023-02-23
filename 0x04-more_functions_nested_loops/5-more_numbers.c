#include "main.h"
/**
 * more_numbers - print 0 upto 14 x10
 *
 */
void more_numbers(void)
{
	int i;
	int j;
	int f;
	int l;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			l = i % 10;
			f = (i - l) / 10;

			if (i > 9)
			{
				_putchar('0' + f);
			}
			_putchar('0' + l);
		}
	}
	_putchar('\n');
}
