#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  turn arguments into string
 * @ac: The character to print
 * @av: pointr
 * Return: return char
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *temp;


	if (ac == 0 || av == NULL)
		return NULL;
	for (i = 0; i < ac; i++)
	{
		temp = (char *)malloc(sizeof((int)strlen(av[i])) + 4);
		if (temp == NULL)
			return NULL;
		for (j = 0; j <= (int)strlen(av[i]) ; j++)
		{
			temp[i + j] = av[i][j];
			if (j + 1 = (int)strlen(av[i]))
				temp[i][j] = '\n';

		}
		
	}
	return (temp);

}