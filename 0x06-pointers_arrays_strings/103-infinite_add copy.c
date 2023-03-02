#include "main.h"
#include <string.h>
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

n1_len = (int)strlen(n1);
n2_len = (int)strlen(n2);

/* check numbers to result*/

if ((n1_len > size_r) || (n2_len > size_r))
{
	return (0); /* number can not be stored in r*/
}
/* create temp_storage for small length number*/
/* decide from where to start filling temp_n*/
if(n1_len >= n2_len)
	max_len = n1_len, min_len = n2_len, start_point = n1_len - n2_len;
else
    max_len = n2_len, min_len = n1_len, start_point = n2_len - n1_len;



/*start filling temp_n with  smaller length number*/
	char temp_n[100];
	char temp_r[101];

	for(i = 0; i < min_len; i++)
	{
		if (min_len == n1_len)
			temp_n[i + start_point] = n1[i];
		if (min_len == n2_len)
			temp_n[i + start_point] = n2[i];
	}
	/* fill the initial empy places with zero*/
	for (i = 0; i < start_point; i++)
	{
		temp_n[i] = 0;
	}

/* Start adding the numbers*/

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
	/*compare temporary result with result*/
	if ((int)strlen(temp_r) > size_r)
		return (0);
	else
	{
		/*transfer temporary result to r*/
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