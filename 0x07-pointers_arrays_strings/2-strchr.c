#include "main.h"
#include <string.h>
/**
 * _strchr - search character in a string
 * @s: string litteral
 * @c: character to be searched
 * Return: pointer to the first occurence of a character
 */

char *_strchr(char *s, char c)
{
int i, s_len, found;

s_len = (int)sizeof(s);
found = 0;

for (i = 0; i < s_len; i++)
{
if (*(s + i) == c)
return (s + i);
if (i + 1 == s_len)
return (NULL);
}
return (NULL);
}
