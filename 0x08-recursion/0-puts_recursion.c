#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints recursion
 * @s: the string
 *
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
int i, s_len;

s_len = (int)strlen(s);
for (i = 0; i < s_len; i++)
{
_putchar(s[i]);

}
_putchar('\n');
}
