#include "main.h"
/**
 * print_array - checks for upper case
 * @a: array in question
 * @n: number of array elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
	for (j = 0; j < (int)strlen(a[i]); j++)
	{
		_putchar(a[i][j]);
	}
	_putchar(',');
	if (i != n - 1)
	{
		_putchar(' ');
	}
}
_putchar('\n');
}
