#include "main.h"
#include <string.h>
/**
 * puts2 -  prints every other character of a string
 * @str: string to be printed
 * Return: nothing
 */
void puts2(char *str)
{
int i;
int len;

for (i = 0, len = (int)strlen(str); i < len; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
