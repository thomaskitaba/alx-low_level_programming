#include "main.h"
/**
 * print_triangle - print trinangle
 * @size: size of square
 *
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				_putchar(32);
			}
			for (k = 0; k < i + 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
