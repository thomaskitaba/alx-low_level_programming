#include "main.h"
/**
 * reverse_array - swaps string varibles
 * @a: the array
 * @n: array length
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, middle, temp;

middle = n / 2;
for (i = 0; i < middle; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
