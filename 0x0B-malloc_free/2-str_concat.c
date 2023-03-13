#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  writes the character c to stdout
 * @s1: string 1
 * @s2: string 2
 * Return: return string
 */
char *str_concat(char *s1, char *s2)
{
  int i, j, s1_len, s2_len;
  char *concatenated;

  s1_len = (int)strlen(s1);
  s2_len = (int)strlen(s2);
  concatenated = malloc((s1_len *sizeof(char)) + (s2_len *sizeof(char)));

if (s1 == NULL)
  s1 = "";
if (s2 == NULL)
  s2 = "";
if (concatenated == NULL)
{
  return (NULL);
}
for (i = 0; i < s1_len; i++)
{
  concatenated[i] = s1[i];
}
for (j = 0; j < s2_len; j++)
{
  concatenated[s1_len + j] = s2[j];
  if (j + 1 == s2_len)
  {
    concatenated[s1_len + j + 1] = '\0';
  }
}
return (concatenated);


}