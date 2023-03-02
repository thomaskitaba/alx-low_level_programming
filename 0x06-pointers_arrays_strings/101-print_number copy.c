#include "main.h"
#include <string.h>
/**
 * print_number - print integers
 * @n: number to be printed
 * Return: nothing 
 */
void print_number(int n)
{
  int i, temp, k, int_len, power, f;

  int_len = 0, temp = n, power = 1;

  if (n < 0)
  {
    n *= -1;
    temp = n;
    _putchar('-');
  }
  /*find the length of the integer*/
  while(temp > 0)
  {
    temp /= 10;
    int_len++;
  }

  for(i = 0; i < int_len; i++)
  {
    /* find power*/
    power = 1;
    for (k = i; k < int_len - 1; k++)
    {
      power *= 10;
    }
    f = temp / power;
    temp -= (f * power); 
    _putchar('0' + f);
    
  }
}