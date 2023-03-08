#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints recursion
 * @s: string
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
  int i, s_len;

  s_len = (int)strlen(s);
  for (i = s_len; i > 0; i--)
  {
    _putchar(s[i]);
  }
}