#include "main.h"
#include <string.h>
/**
 * leet - swaps string varibles
 * @str: char to be swaped
 * Return: nothing
 */
char *leet(char *str)
{
int i, j, str_len, ltr_len;

char letter[] = "aAeEoOtTlL";
char number[] = "4433007711";
str_len = (int)strlen(str);
ltr_len = (int)strlen(letter);

for (i = 0; i < str_len; i++)
{
for (j = 0; j < ltr_len; j++)
{
if (str[i] == letter[j])
{
str[i] = number[j];
}
}
}
return (str);
}