#include "main.h"
#include <string.h>
/**
 * _strncat - swaps string varibles
 * @src: source
 * @dest: destination
 * @n: number of bites
 * Return: character swaped
 */
char *_strncat(char *dest, char *src, int n)
{
int i, dest_len, src_len;
dest_len = (int)strlen(dest);
src_len = (int)strlen(src);
/* first find the null char*/
if (n > src_len)
{
n = src_len;
}
for (i = 0; i < n; i++)
{
dest[dest_len + i] = src[i];
if (i + 1 == src_len)
{
dest[dest_len + i + 1] = '\0';
}
}
return (dest);
}
