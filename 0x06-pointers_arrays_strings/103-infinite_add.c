#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * infinite_add - add larger length of number
 * @n1: number 1 to be added
 * @n2: number 2 to be added
 * @r: result buffer
 * @size_r: size of result buffer
 * Return:  result of addition
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, sum;
int n1_len, n2_len, max_len, min_len, start_point, remainder;
char *temp_n, *temp_r;

n1_len = (int)strlen(n1), n2_len = (int)strlen(n2), temp_r = malloc(sizeof(char) * size_r);
if ((n1_len > size_r) || (n2_len > size_r))
	return (0); /* number can not be stored in r*/
if(n1_len >= n2_len)
	max_len = n1_len, min_len = n2_len, start_point = n1_len - n2_len, temp_n = malloc(sizeof(n1));
else
    max_len = n2_len, min_len = n1_len, start_point = n2_len - n1_len, temp_n = malloc(sizeof(n2));
temp_n = malloc(sizeof(n1));
	for(i = 0; i < min_len; i++)
	{ 	
		if (min_len == n1_len)
			temp_n[i + start_point] = n1[i];
		if (min_len == n2_len)
			temp_n[i + start_point] = n2[i]; 
	}
	for (i = 0; i < start_point; i++)
		temp_n[i] = 0;
	remainder = 0;
	for (j = max_len - 1; j > 0; j--)
	{	
		if (min_len == n1_len)  /* temp_n  and n1 */
		{
			sum = temp_n[j] + n1[j] + remainder;
			if (sum > 9)
				remainder = sum / 10, temp_r[j] = sum % 10;
			else
				remainder = 0, temp_r[j] = sum;
		}
		if (min_len == n2_len)  /* temp_n  and n2 */
		{
			sum = temp_n[j] + n2[j] + remainder;
			if (sum > 9)
				remainder = sum / 10, temp_r[j] = sum % 10;
			else
				remainder = 0, temp_r[j] = sum;
		}
		if ( j - 1 == 0)
			temp_r[0] = remainder;
		else
			temp_r[0] = 0;
	}
	if ((int)strlen(temp_r) > size_r)
		return (0);
	else
	{
		start_point = 0;
		for (j = 0; j < (int)strlen(temp_r); j++)
		{
			if (temp_r[0] == 0)
				start_point = 1;
			r[j] = temp_r[j + start_point];
		}
	}
return (r);
}
