#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - Entry point for the program
 * @s: string to be searched
 * @accept: string to search
 * Return: pointer to s on success, NULL error
 */
char *_strpbrk(char *s, char *accept)
{
int i, j, s_len, accept_len;

s_len = (int)strlen(s);
accept_len = (int)strlen(s);
for (i = 0; i < accept_len; i++)
{
for (j = 0; j < s_len; j++)
{
if (s[j] == accept[i])
{
return (s + j);
}
}
}
return (0);
}
