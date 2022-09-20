#include "main.h"
/**
 * puts2 - print characters of a string
 * @str: string to print
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
