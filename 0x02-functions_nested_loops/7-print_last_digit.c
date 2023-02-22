#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the number provided
 *
 * Return: 0 on success, other number on error
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	_putchar('0' + l);
	return (l);
}
