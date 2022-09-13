#include "main.h"
/**
 * main -print _putchar
 * Return: zero
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; c[i] != 00 ; i++)
	{
		_putchar (c[i]);
	}

	_putchar('\n');

	return (0);
}
