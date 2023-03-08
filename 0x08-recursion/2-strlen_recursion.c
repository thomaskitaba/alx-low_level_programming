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
  int i;
  i = 0;

  while(s != '\0')
  {
    s - _strlen_recursion(s + 1);
  }  
}
