#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - strlen recursion
 * @s: string
 *
 * Return: Nothing.
 */
int _strlen_recursion(char *s)
{
if (*(s + 0) != '\0')
return (_strlen_recursion(s + 1) + 1);
return (0);
}
