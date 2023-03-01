#include "main.h"
#include <string.h>

/**
 * _strcmp - swaps string varibles
 * @s1: char to be copied
 * @s2: char to be cpied to
 * Return: 0 if the same, -1 if after, 1 if before
 */
int _strcmp(char *s1, char *s2)
{

int i, s1_len, s2_len, result;

s1_len = (int)strlen(s1);
s2_len = (int)strlen(s2);

for (i = 0; i < s1_len; i++)
{
if (s1[i] == s2[i])
{
result = 0;
}
else
{
if ((s1[i] >= 97 && s1[i] <= 122) && (s1[i] >= 65 && s2[i] <= 90) && (s1[i] - s2[i]))
{
result = s2[i] - s1[i];
return (result);
}

result = s1[i] - s2[i];
return (result);
}

}
if (i + 1 == s1_len)
{
if (s1_len < s2_len)
{
result = 0 - s2[i];
return (result);
}
}
return (0);

}