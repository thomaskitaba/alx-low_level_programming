#include "main.h"
#include <string.h>
/**
 * print_array - checks for upper case
 * @a: array in question
 * @n: number of array elements
 */
void print_array(int *a, int n)
{
int i, j, k, num, f, sign, temp, int_len, power;

sign = 1, int_len = 0;
for (i = 0; i < n; i++)
{
if (a[i] < 0)
{
sign = -1, temp = -(a[i]);
}
else
{
sign = 1, temp = a[i];
}
num = temp, int_len = 0;
while (temp > 0)
{
temp /= 10, int_len++;
}
if (num != 0)
{
for (j = 0; j < int_len; j++)
{
power = 1;
for (k = j; k < int_len - 1; k++ )
{
power *= 10;
(
f = num / power, num -= f * power;
if (j == 0 && sign < 0)
putchar('-')
putchar('0' + f);
}
}
else
putchar('0');
if (i + 1 != n)
{
putchar(','), putchar(' ');
}
}
}



