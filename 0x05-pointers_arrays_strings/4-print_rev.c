#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to print
 *
 */
void print_rev(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	i = len;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
}
