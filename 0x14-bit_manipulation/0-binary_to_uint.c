#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a poinnter to a string of  0 and 1
 * Return: the converted number or 0 if any char is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
		{
			return (0);
		}
		num = 2 * num + (b[c] - '0');
	}
	return (num);
}
