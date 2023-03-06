#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 on success, other values on error
 */

char *_strchr(char *s, char c)
{
  int i, s_len;
  
  s_len = (int)sizeof(s);
  
  for (i = 0; i < s_len; i++)
  {
    if (s[i] == c)
      return (s[i]);
  }
  return (0);
}
