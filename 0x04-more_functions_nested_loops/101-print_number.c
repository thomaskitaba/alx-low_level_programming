#include "main.h"
#include "math.h"
/**
 * print_number - print up to 4 digit number
 * @n: number to be printed
 * Return: nothing
 */
void print_number(int n)
{
int count, temp, i, power, num;

if (n < 0)
{
n *= -1;
putchar('-');
}
temp = n;
while (temp != 0)
{
temp /= 10;
count++;
}
power = (int)pow(10, (count - 1));
temp = n;
if (n != 0)
{
for (i = 1; i < count + 1; i++)
{
power = (int)pow(10, (count - i));
num = temp / power;
temp =  temp % power;
putchar('0' + num);
}
putchar(temp);
}
else
{
putchar('0');
}
putchar('\n');
}
