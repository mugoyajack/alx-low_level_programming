#include <stdio.h>
/**
 * main - prints combinations of 2 two-digit numbers
 * Return: zero
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(32);
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);
			if (i != 98 || j != 99)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);

	return (0);
}
