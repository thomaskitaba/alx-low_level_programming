#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d\n byte(s", sizeof(char));
	printf("Size of a int: %d\n byte(s)", sizeof(int));
	printf("Size of a long int: %d\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %d\n byte(s)", sizeof(long long int));
	printf("Size of a float: %d\n byte(s)", sizeof(float));
	return (0);
}

