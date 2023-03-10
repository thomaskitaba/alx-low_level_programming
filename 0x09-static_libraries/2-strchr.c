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
int  j, s_len, first_occurence;

s_len = (int)strlen(s);
first_occurence = -1;

for (j = 0; j < s_len; j++)
{
if (s[j] == c)
{
if (first_occurence == -1)
first_occurence = j;
if (first_occurence >= j)
first_occurence = j;
}
}

if (first_occurence == -1)
return (NULL);
else
return (s + first_occurence);
}
