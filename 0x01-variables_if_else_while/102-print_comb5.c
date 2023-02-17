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
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				for (l = j + 1; l < 10; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(44);
					putchar('0' + k);
					putchar('0' + l);
					if (j != 8)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
