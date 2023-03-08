#include "main.h"
/**
 * _pow_recursion - power recursion
 * @x: number 1
 * @y: number 2
 *
 * Return: Nothing.
 */
int _pow_recursion(int x, int y)
{
  int power;
  
  if (y < 0)
    return (-1);
  if (y == 0)
    return (1);
  
  if (y > 0)
    
    power = x * _pow_recursion(x, y - 1);
  
  return (power);
}