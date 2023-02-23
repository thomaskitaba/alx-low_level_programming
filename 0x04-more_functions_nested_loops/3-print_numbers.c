#include "main.h"
/**
 * print_numbers - print 0 upto 9
 *
 * Return: 0 up 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
