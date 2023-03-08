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

  while(s != '\0')
  {
    _strlen_recursion(s + 1);
  }  
}