#include "main.h"
#include <unistd.h>

/**
 * _putchar -  writes the character c to stdout
 * @c: The character to print
 * Return: return 0 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
