#include "main.h"
/**
 * jack_bauer - print minute from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		if (i < 2)
		{
			for (j = 0; j < 10; j++)
			{
				for (k = 0; k < 6; k++)
				{
					for (l = 0; l < 10; l++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + l);
					}
				}
			}
		if (i == 2)
		{
			for (j = 0; j < 4; j++)
			{
				for (k = 0; k < 6; k++)
				{
					for (l = 0; l < 10; l++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + l);
					}
				}
			}

		}
	}
}
