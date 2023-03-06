#include <string.h>
/**
 * _strstr - Entry point for the program
 * @haystack: heystack
 * @needle: needle
 * Return: 0 on success, other values on error
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, hey_len, need_len, found, location;

found = 0, location = 0;
hey_len = (int)strlen(haystack), need_len = (int)strlen(needle);

for (i = 0; i < hey_len; i++)
{
if (haystack[i] == needle[0])
{
found = 0;
location = i; /*27*/
for (j = 0; j < need_len; j++)
{
if (haystack[j + i] == needle[j])
found ++;
if (j + i + 1 >= hey_len)
	break;
}
}

}
if (found == need_len)
return (haystack + location);
return (NULL);
}
