#include "main.h"
#include <string.h>
/**
 * _strspn - return initial segment
 * @s: string to be looked
 * @c: set of characters
 * Return: 0 on success, other values on error
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j , position, s_len, c_len;

s_len = (int)strlen(s);
c_len = (int)strlen(accept);
position = 0;
for (i = 0; i < s_len; i++)
{
for (j = 0; j < c_len; j++)
{
if (s[i] == accept[j])
{
position = i + 1;
break;
}
if (j + 1 == c_len)
{
return (position);
}
}
}
return (position);
}