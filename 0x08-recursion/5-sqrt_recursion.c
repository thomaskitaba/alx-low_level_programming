#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - _sqrt_recursion
 * @n: string
 *
 * Return: int.
 */
int _sqrt_recursion(int n)
{
if (n > 1)
{
  if (n == pow(_sqrt_recursion(n - 1), 2 ))
    return (n);
  
}
return (-1);
}