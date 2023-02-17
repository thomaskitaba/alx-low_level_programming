#include <stdlib.h>
#include <stdio.h>
#include <time.h>
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
		putchar('0' + i);

	}
	for (j = 0; j < 6; j++)
	{
		putchar(97 + j);
	}
	putchar('\n');
	return (0);
}
