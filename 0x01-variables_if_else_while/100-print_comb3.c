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

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{

			putchar('0' + i);
			putchar('0' + j);
			if (i != 8)
			{
				putchar(43 + 1);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}