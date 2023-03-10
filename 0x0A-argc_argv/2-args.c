#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - entry point for the program
 * @argc: argument count
 * @argv: argument vectory/array
 *
 * Return: 0 on success, other integer on error
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
