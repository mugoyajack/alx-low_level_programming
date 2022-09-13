#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: the starting point
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 97; i++)
			printf("%i, ", i);
		printf("98\n");
	}
	else if (n == 98)
	{
		printf("98\n");
	}
	else
	{
		for (i = n; i >= 99; i--)
			printf("%i, ", i);
		printf("98\n");
	}
}
