#include "main.h"
/**
 * print_times_table -  function that prints the 9 times table, starting with 0.
 * @n : n times table
 */
void print_times_table(int n)
{
int i, j, f, s, l, temp, result;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (result > 9 && result <= 99)
{
l = result % 10, f = (result - l) / 10;
_putchar('0' + f), _putchar('0' + l);
}
else if (result > 99)
{
temp = result, f = temp / 100, s = (result - (f * 100)) / 10, l = result % 10;
_putchar('0' + f), _putchar('0' + s), _putchar('0' + l);
}
else
_putchar('0' + result);
if (j != n)
{
_putchar(',');
if (result <= 9)
{
_putchar(32), _putchar(32), _putchar(32); }
else if (result > 9 && result <= 99)
_putchar(32), _putchar(32);
else
{
_putchar(32); } } }
_putchar('\n'); } }
}
