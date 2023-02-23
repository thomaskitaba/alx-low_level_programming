#include "main.h"
/**
 * _isupper - checks for upper case
 * @c: char to be checked
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
