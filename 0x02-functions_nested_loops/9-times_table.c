#include "main.h"
/**
 * times_table -  function that prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int i;
	int j;
	int f;
	int l;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result > 9)
			{
				l = result % 10;
				f = (result - l) / 10;

				_putchar('0' + f);
				_putchar('0' + l);
			}
			else
			{
				_putchar('0' + result);
			}
			if (j != 9)
			{
				_putchar(44);
				if (result > 9)
					_putchar(32);
				else
				{
					_putchar(32);
					_putchar(32);
				}
			}
			
		}
		_putchar('\n');
	}
}
