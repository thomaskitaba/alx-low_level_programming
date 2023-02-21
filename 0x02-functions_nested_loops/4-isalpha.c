#include "main.h"
/**
 * _isalpha - check if a chaharacter is alphabet or
 * @c:  the character to be checked
 * Return: 0 on if lowercase, 0 if uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
