#include "main.h"
/**
 * _islower - check if a chaharacter is lower or not
 * @c:  the character to be checked
 * Return: 0 on if lowercase, 0 if uppercase
 */
int _islower(int c)
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
