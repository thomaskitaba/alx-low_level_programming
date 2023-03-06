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
int i, j, s_len, accept_len, first_occurence;

s_len = (int)strlen(s);
accept_len = (int)strlen(accept);
first_occurence = -1;
for (i = 0; i < accept_len; i++)
{
for (j = 0; j < s_len; j++)
{
if (s[j] == accept[i])
{
if (first_occurence == -1)
first_occurence = j;
if (first_occurence >= j)
first_occurence = j;
}
}
}
if (first_occurence == -1)
return NULL;
else
return (s + first_occurence);
}
