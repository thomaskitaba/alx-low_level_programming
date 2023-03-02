#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print__buffer - print a buffer
 * @b: pointer to buffer
 * @size: byte size pointed by b
 * Return: nothing
 */
 void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size;  i++)
	{
		if ((i != 0) && (i % 10 == 0))
		{
			putchar('\n');
			printf("%p: ", &b[i]);
		}
		printf("%d", *(b + i));
		if ((i + 1) % 10 != 0)
			putchar(' '); 
	}
}