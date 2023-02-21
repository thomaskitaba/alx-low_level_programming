#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the number provided
 *
 * Return: 0 on success, other number on error
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}


