#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (int j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar(10);
	}
	return (0);
}
