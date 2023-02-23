#include "main.h"
/**
 * print_square - print 0 upto 14 x10
 * @size: size of square
 */
void print_square(int size);
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#' + l);
			}
			_putchar('\n');
		}
	}
}
