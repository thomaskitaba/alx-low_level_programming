#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 on success, other values on error
 */
int main(void)
{
	int small;

	for (small = 97; small < 123; small++)
	{
		char small_char = (char) small;

		putchar (small_char);
	}
	putchar('\n');
	return (0);
}
