#include "main.h"
/**
 * swap_int - swaps string varibles
 * @a: char to be swaped
 * @b: char to be swaped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
