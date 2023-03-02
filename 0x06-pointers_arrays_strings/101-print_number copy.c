#include "main.h"
#include <string.h>
/**
 * print_number - print integers
 * @n: number to be printed
 * Return: nothing
 */
void print_number(int n)
{
int j, k, num, f_power, f, sign, temp, int_len, power;

sign = 1, int_len = 0;

if (n < 0)
	sign = -1, temp = -(n);
else
	sign = 1, temp = n;

num = temp, int_len = 0;

while (temp > 0)
{ temp /= 10, int_len++; }

if (num != 0)
{
	for (j = 0; j < int_len; j++)
	{
	power = 1;
	for (k = j; k < int_len - 1; k++)
	{ power *= 10; }
	f = num / power, f_power = f *power, num -= f_power;
	if (j == 0 && sign < 0)
		_putchar('-');
	_putchar('0' + f);
	}
}
else
	_putchar('0');
_putchar('\n');
}