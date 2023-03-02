#include "main.h"
#include <string.h>
/**
 * rot13 - rotate alphabets by 13
 * @str: string to be rotated
 * Return: rotated char
 */
char *rot13(char *str)
{
int i, j, str_len, ltr_len;

char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
str_len = (int)strlen(str);
ltr_len = (int)strlen(str);

for (i = 0; i < str_len; i++)
{
for (j = 0; j < ltr_len; j++)
{
if (str[i] == letter[j])
{
str[i] = rotated[j];
}
}
}
return (str);
}
