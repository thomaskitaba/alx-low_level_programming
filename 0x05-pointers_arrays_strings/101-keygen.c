#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point of the program
 *
 * Return: 0 on success, other positive integer on error
 */

int main(void)
{

int i, list_len;

char password[15];
char list[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 !@#$%^&*()-_=+[{]}\\|;:'\",<.>/?";
srand(time(NULL));

list_len = (int)strlen(list);
for (i = 0; i < 14; i++)
{
password[i] = list[rand() % list_len];
}
password[15] = '\0';
printf("Tada! Congrats");

return (0);
}
