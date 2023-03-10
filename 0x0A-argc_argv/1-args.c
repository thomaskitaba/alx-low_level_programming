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

if ((int)strlen(argv[0]) == 0)
{
printf("%d\n", 0);
return (0);
}
printf("%d\n", argc - 1);
return (0);
}
