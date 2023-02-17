#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 on success, other values on error
 */
int main(void)
{
	int small;
	int cap;
	
	for(small = 97; small < 123; small++)
	{
		char small_char = (char)small;
		putchar(small_char);
	}
	for (cap = 65; cap < 91; cap++)
	{
		char big_char = (char)cap;
		putchar(big_char);
	}
	
	putchar('\n');
        return (0);
}
~                                                                                                
~                                                                                                
~                                                                                                
~                    
