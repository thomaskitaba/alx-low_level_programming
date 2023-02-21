#include "main.h"
/**
 * print_alphabet_x10 -  Print the alphabets
 *
 */
void print_alphabet_x10(void)
{	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putcar(c);
		}
		_putchar('\n');
	}
}
