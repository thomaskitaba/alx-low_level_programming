#include <stdio.h>
#include <stdlib.h>

/**
 * main - add multiples of 3 and 5 bellow 1024
 *
 * Return: 0 on success, other integer on error
 */
int main(void)
{
	int n;
	int sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d", sum);
	return (0);
}
