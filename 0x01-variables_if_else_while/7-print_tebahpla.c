#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse using putchar
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar ('\n');
	return (0);
}
