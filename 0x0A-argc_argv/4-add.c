#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - entry point for the program
 * @argc: argument count
 * @argv: argument vectory/array
 *
 * Return: 0 on success, other integer on error
 */

int main(int argc, char *argv[])
{
int i, j, result;

result = 0;
if (argc > 1)
{
/*check if it is number*/
for (i = 1; i < argc; i++)
{
for (j = 0; j < (int)strlen(argv[i]); j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("%s\n", "Error");
return (1);
}
if (argv[i][j + 1] == '\0')
result += atoi(argv[i]);
}
}
printf("%d\n", result);
return (0);
}
printf("%d\n", 0);
return (0);
}
