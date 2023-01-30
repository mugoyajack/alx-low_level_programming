#include "main.h"

/**
 * num_len - finds the number of digits in a number
 * @n: the number to find digits
 * Return: Number of digits
 */
int num_len(int n)
{
	int digits = 0;

	while (n != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}
/**
 * find_power - finds power of number just like pow()
 * @base: base value
 * @exponent: exponent value
 * Return: value of power
 */
int find_power(int base, int exponent)
{
	if (exponent == 0)
		return (1);
	else
		return (find_power(base, exponent - 1) * base);
}
/**
 * print_number - prints a number using putchar
 * @n: The number to print
 * Return: void
 */
void print_number(int n)
{
	int j;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	for (j = num_len(n) - 1; j > 0; j--)
	{
		_putchar((int)(n / find_power(10, j)) % 10 + '0');
	}
	_putchar(n % 10 + '0');
}
