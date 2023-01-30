#include "main.h"
/**
 * print_table - print multplication table
 * @k: num to print
 * Return; void
 */
void print_table(int k)
{
	if (k <= 9)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(32);
		_putchar(k + '0');
	}
	else if (k >= 10 && k <= 99)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
	else if (k >= 100 && k <= 226)
	{
		_putchar(44);
		_putchar(32);
		_putchar((k / 100) + '0');
		_putchar(((k - 100) / 10) + '0');
		_putchar(k % 10 + '0');
	}
}

/**
 * print_times_table - print multiplication table of n*n
 * @n: multiple of
 * Return: void
 */
void print_times_table(int n)
{
	if (n > -1 && n <= 15)
	{
		int i = 0, j, k;

		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = i * j;

				if (j == 0)
				{
					_putchar(k + '0');
				}
				else if (k <= 9)
				{
					print_table(k);
				}
				else if (k >= 10 && k <= 99)
				{
					print_table(k);
				}
				else if (k >= 100 && k <= 226)
				{
					print_table(k);
				}

				j++;
			}
			_putchar(10);
			i++;
		}
	}
}