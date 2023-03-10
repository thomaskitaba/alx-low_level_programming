#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_twos(int cents);
int calculate_pennies(int cents);
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
		twos = calculate_twos (cents), cents = cents - twos * 2;
		pennies = calculate_pennies(cents), cents = cents - pennies * 1;
		coins = quarters + dimes + nickels + twos + pennies;
		printf("%i\n", coins);
		return (0);
}
int calculate_quarters(int cents)
{
		if (cents >= 25)
					return ((floor(cents / 25)));
		return 0;
}
int calculate_dimes(int cents)
{
		if (cents >= 10 && cents < 25)
					return ((floor(cents / 10)));
		return 0;
}
int calculate_nickels(int cents)
{
		if (cents >= 5 && cents < 10)
				return ((floor(cents / 5)));
		return 0;
}
int calculate_twos(int cents)
{
	if (cents >= 2 && cents < 5)
		return ((floor(cents / 2)));
	return (0);
}
int calculate_pennies(int cents)
{
		if (cents == 1)
				return ((floor(cents / 1)));
		return 0;
}
