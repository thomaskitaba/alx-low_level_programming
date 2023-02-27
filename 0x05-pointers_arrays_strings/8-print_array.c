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

for (i = 0; i < n; i++)
{
_putchar(a[i]);
}
_putchar('\n');
}
