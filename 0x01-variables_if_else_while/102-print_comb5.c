#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 on success, other values on error
 */
int main(void)
{
	int i;
	int j;
	int k;
	int m;

	for (k = 0; k < 10; k++)
	{
		for (m = 0; m < 9; m++)
		{
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
				{
					if (j != 0 || i != 0)
					{
						putchar('0' + k);
						putchar('0' + m);
						putchar(32);
						putchar('0' + i);
						putchar('0' + j);

						if (m != 8 || i != 9 || j != 9)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
