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

	for (small = 122; small > 96; small--)
	{
		char small_char = (char) small;

		putchar (small_char);
	}
	putchar('\n');
	return (0);
}
