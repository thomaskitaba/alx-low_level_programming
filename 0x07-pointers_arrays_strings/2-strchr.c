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
int i, s_len;

s_len = (int)sizeof(s);

for (i = 0; i < s_len; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
