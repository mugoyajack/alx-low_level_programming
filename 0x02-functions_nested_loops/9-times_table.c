#include "main.h"
/**
 * times_table - print multiplication table of 9x9
 * Return: void
  */
void times_table(void)
{
	int i = 0, j, k;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = i * j;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			else if (k <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}
