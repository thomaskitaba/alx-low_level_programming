#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * calculate_quarters - calculate
 * @cents: argc
 * Return: cents on success, 0 on error
 */
int calculate_quarters(int cents)
{
if (cents >= 25)
return ((floor(cents / 25)));
return (0);
}
/**
 * calculate_dimes - calculate
 * @cents: argc
 * Return: cents on success, 0 on error
 */
int calculate_dimes(int cents)
{
if (cents >= 10 && cents < 25)
return ((floor(cents / 10)));
return (0);
}
/**
 * calculate_nickels - calculate
 * @cents: argc
 * Return: cents on success, 0 on error
 */
int calculate_nickels(int cents)
{
if (cents >= 5 && cents < 10)
return ((floor(cents / 5)));
return (0);
}
/**
 * calculate_twos - calculate
 * @cents: argc
 * Return: cents on success, 0 on error
 */
int calculate_twos(int cents)
{
if (cents >= 2 && cents < 5)
return ((floor(cents / 2)));
return (0);
}
/**
 * main - entry point for the program
 * @argc: argc
 * @argv: argument vector
 * Return: 0 on success, other 1 on error
 */
int main(int argc, char *argv[])
{
int cents, quarters, dimes, nickels, twos, pennies, coins;

if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}
else
cents = atoi(argv[1]);
if (cents < 0)
{
printf("%d\n", 0);
return (0);
}
quarters = calculate_quarters(cents), cents = cents - quarters * 25;
dimes = calculate_dimes(cents), cents = cents - dimes * 10;
nickels = calculate_nickels(cents), cents = cents - nickels * 5;
twos = calculate_twos(cents), cents = cents - twos * 2;
pennies = cents;
coins = quarters + dimes + nickels + twos + pennies;
printf("%i\n", coins);
return (0);
}
