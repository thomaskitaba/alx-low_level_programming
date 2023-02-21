#include "main.h"
/**
 * times_table -  function that prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		int result = 0;

		for (j = 0; j < 10; j++)
		{
			result = i * j;
			_putchar(result);
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
		}
		_putchar(\n);
	}
}
