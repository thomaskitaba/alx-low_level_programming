#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - strlen recursion
 * @s: string
 *
 * Return: Nothing.
 */
int _strlen_recursion(char *s)
{
if (*(s + 0) != '\0')
return (_strlen_recursion(s + 1) + 1);
return (0);
}

/**
 * compare - prints recursion
 * @s: string
 * @left: characters from the left
 * @right: charactes form the right
 * Return: 1 if palindrom, 0 if they are not.
 */
int compare(char *s, int left, int right)
{
int mid;

mid = _strlen_recursion(s) / 2;
if (left <= mid && right >= mid)
{
if (s[left] != s[right])
return (0);
else
{
return (0 + compare(s, left + 1, right - 1));

}
}
return (1);
}
/**
 * is_palindrome - prints recursion
 * @s: string
 *
 * Return: Nothing.
 */
int is_palindrome(char *s)
{
return (compare(s, 0, (_strlen_recursion(s) - 1)));
}
