#include "main.h"
/**
 * factorial - factorial
 * @n: number
 *
 * Return: result.
 */
int factorial(int n)
{
if (n == 1 || n == 0)
{
return (1);
}
if (n > 0)
{
n *= factorial (n - 1);
return (n);
}
else
return (-1);
}