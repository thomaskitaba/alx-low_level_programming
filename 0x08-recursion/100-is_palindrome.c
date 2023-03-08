#include "main.h"
#include <string.h>
/**
 * is_palindrome - prints recursion
 * @s: string
 *
 * Return: Nothing.
 */
int is_palindrome(char *s)
{
	int i, s_len;
  
	s_len = (int)strlen(s);
	

	for (i = 0; i <= s_len / 2; i++)
	{
		if (s[i] != s[s_len - i - 1])
			return (0);
		
	}
	return (1);
}