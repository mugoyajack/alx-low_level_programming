#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (int i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar(10);
	}
	return (0);
}
