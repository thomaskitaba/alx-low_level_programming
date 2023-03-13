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
	int i, k, av_len;
	char *temp;

	av_len = 0;
	if (ac == 0 || av == NULL)
		return NULL;

	for (k = 0; k < ac; k++)
	{
		av_len += (int)strlen(av[k]);
	}

	temp = (char *)malloc(av_len);

	if (temp == NULL)
		return (NULL);
	

	for (i = 0; i < av_len; i++)
	{
		if (*av[i] != ' ')
			temp[i] = *(av[0] + i);
		else
			temp[i] = '\n';
		}
	

	return (temp);
}
