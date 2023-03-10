#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - Entry point for the program
 * @a: array
 * @size: size of array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{

int i, sum_1, sum_2;

sum_1 = sum_2 = 0;
for (i = 0; i < size * size ; i = i + size + 1)
{
sum_1 += *(a + i);  /* condition */
}
for (i = size - 1; i <= ((size * size) - size); i = i + size - 1)
{
sum_2 += *(a + i); /*TODO: */
}
printf("%d, %d", sum_1, sum_2);
printf("\n");
}
