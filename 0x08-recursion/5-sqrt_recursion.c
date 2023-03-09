#include "main.h"
#include <math.h>
/**
 * _square - check for perfect square
 * @n: number
 * @i: increment
 * Return: int.
 */
int _square(int n, int i)
{
if (i <= n / 2)
{
if ( n == i * i)
return (i);
if (n == 1)
return (1);
return (_square(n, i + 1));
}
return (-1);
}
/**
 * _sqrt_recursion - _sqrt_recursion
 * @n: number
 *
 * Return: int.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
{
return (_square(n, 1));
}
}