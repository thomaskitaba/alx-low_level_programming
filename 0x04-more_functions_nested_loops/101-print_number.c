#include "main.h"
/**
 * print_number - print up to 4 digit number
 * @n: number to be printed
 * Return: nothing
 */
void print_number(int n)
{
int f, t, l, s, temp;
if (n == 0)
{
_putchar('0' + n);
}
if (n > 9 && n < 100)
{
l = n % 10;
f = (n - l) / 10;
_putchar('0' + f), _putchar('0' + l);
}
if (n >= -99 && n < 0)
{
n = -(n);
l = n % 10;
f = (n - l) / 10;
_putchar('-'), _putchar('0' + f), _putchar('0' + l);
}
if (n > 99 && n < 1000)
{
l = n % 10;
temp = (n - l) / 10;
s = temp % 10;
f = (temp - s) / 10;
_putchar('0' + f), _putchar('0' + s), _putchar('0' + l);
}
if (n > 999 && n < 10000)
{
l = n % 10;
temp = (n - l) / 10;
t = temp % 10;
temp = (temp - t) / 10;
s = temp % 10;
f = (temp - s) / 10;
_putchar('0' + f), _putchar('0' + s), _putchar('0' + t), _putchar('0' + l);
}
}
