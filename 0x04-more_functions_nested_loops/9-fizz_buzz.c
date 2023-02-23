#include <stdio.h>
/**
 * main - entry for fizz buzz
 *
 * Return: 0 on success, other integer on error
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ";
			continue;
		}
		printf("%d ", i);

	}
	printf("\n");
	return (0);
}
