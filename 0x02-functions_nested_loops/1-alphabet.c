#include "main.h"
#include <stdio.h>
/**
 * Print the alphabets
 *
 */

void print_alphabet(void)
{
	int small;
	for (small = 97; small < 123; small++)
	{
		putchar(small);
	}

	putchar('\n');
}
