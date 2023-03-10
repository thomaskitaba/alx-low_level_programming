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

	while (count < 50)
	{
		if (count == 0)
		{
			printf("%ld", temp);
		}
		else if (count == 1)
		{
			printf("%ld", num2);
		}
		else
		{
			fib = temp + num2;
			temp = num2;
			num2 = fib;
			printf("%ld", fib);
		}

		if (count != 49)
			printf(", ");
		count += 1;
	}
	printf("\n");
	return (0);
}
