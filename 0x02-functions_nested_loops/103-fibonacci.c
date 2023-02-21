#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry for the fibonic series
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	long int temp = 1;
	long int num2 = 2;
	long int fib = 0;
	int count = 0;
	long sum = 2;

	while (fib <= 4000000)
	{
		fib = temp + num2;
		temp = num2;
		num2 = fib;
		if (fib % 2 == 0)
			sum += fib;
		count += 1;
	}
	printf("%ld\n", sum);
	return (0);
}
