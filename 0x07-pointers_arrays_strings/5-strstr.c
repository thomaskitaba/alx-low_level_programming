#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strstr - Entry point for the program
 * @haystack: heystack
 * @needle: needle
 * Return: 0 on success, other values on error
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, hey_len, need_len,found, continious, location;
	
	found = 0;
	location = 0;

	hey_len = (int)strlen(haystack);
	need_len = (int)strlen(needle);
	continious = 0;


	/*find the first occurence of the initial letter*/
	
	for (i = 0; i < hey_len; i++)
	{
		if (haystack[i] == needle[0])
		{
			location = j; /*27*/
			for (j = 0; j < hey_len; j++)
			{
				/* if reached last chars of the end of haystack then */
				if (need_len <= hey_len - j)
					/* means reached end of haystac but didnot find it*/
					return NULL;

				if (haystack[j + i] == needle[j])
				{
					found = 1;
				}
				else
				{
					found = 0;
					break;
				}
			}
		}
		if (found == 1)
			return (haystack + location);
	}

	if (found == 0)
		return (haystack + location);
	else
		return NULL;
		
	/* check found length with needle length*/
	
}