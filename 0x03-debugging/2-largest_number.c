#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > c)
{
	if (b > a)
		largest = b;
	else
		largest = a;
}
else
{
	if (b > c)
		largest = b;
	else
		largest = c;
}
if (a > b)
{
	if (c > a)
		largest = c;
	else
		largest = a;
}
else
{
	if (c > b)
		largest = c;
	else
		largest = b;
}

return (largest);
}
