#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 on success, other values on error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%ld is positive\n", n);
	else if (n == 0)
		printf("%ld is zero\n", n);
	else
		printf("%ld id negative\n", n);

	return (0);
}

