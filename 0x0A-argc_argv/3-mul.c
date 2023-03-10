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
int result;

if (argc != 3)
{
  printf("%s\n", "Error");
  return (1);
}
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d/n", result);
return (0);
}
