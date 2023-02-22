#include "main.h"

/**
 * jack_bauer - print minute from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
	{
		if (i < 2)
		{
			for (j = 0; j < 10; j++)
			{
				print(i, j, k, l);
			}
		}
		if (i == 2)
		{
			for (j = 0; j < 10; j++)
			{
				print(i, j, k, l);
			}
		}

	}

}
