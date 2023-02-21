#include <stdio.h>
#include <stdlib.h>
/**
 * main: entry for the fibonic series
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	int temp = 1;
	int num2 = 2;
	int fib = 0;
	int count = 0;
	
	while (count < 50)
	{
		if (count == 0)
			printf("%d", temp);
		else if (count == 1)
			printf("%d", num2);
		else
		{
			fib = temp + num2;
			temp = num2;
			num2 = fib;
			printf("%d", fib);
		}
		if (count != 49)
			printf(", ");
		count += 1;
	}
	return (0);
}

