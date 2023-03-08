#include "main.h"
/**
 * is_prime_number - is_prime_number
 * @n: prime number
 *
 * Return: Nothing.
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
if (n == 1)
return (0);
if (n > 2)
{
if ( n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
{
return (0);
}
is_prime_number(n - 1);
}
return (1);
}