#include "main.h"

/**
 * print - print time
 * @i: first part of hour
 * @j: second part of hour
 * @k: first part of minute
 * @l: second part of minute
 *
 */

void print (int i, int j, int k, int l)
{
	for (k = 0; k < 6; K++)
	{
		for (l = 0; l < 10; l++)
		{
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar('0' + k);
			_putchar('0' + l);
		}
	}
}

