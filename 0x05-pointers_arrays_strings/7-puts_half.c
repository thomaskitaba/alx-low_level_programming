#include "main.h"
#include <string.h>
/**
 * puts_half - print half of the string
 * @str: string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
int i;
int n;
int len;

len = (int)strlen(str);
if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = len / 2;
n++;
}
for (i = n; i < len ; i++)
{
_putchar(str[i]);
}
}
