#include <stdio.h>
#include <math.h>
/**
 * main - entry point for greatest prime factor
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
int i, j;
long prime_factor = 612852475143;
int n = sqrt(prime_factor);
for (i = 2; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (prime_factor % i == 0 && prime_factor != i)
{
prime_factor = prime_factor / i;
}
else
break;
}
}
printf("%ld\n", prime_factor);
return (0);
}
