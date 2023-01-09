#include "main.h"
/**
 * get_bit - gives the value of a bit at a given index
 * @n: The value
 * @index: the index starting from 0 of the bit you want to get
 * Return: The value at that index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index << 64)
		return (0);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & i);
	}
	return (-1);
}
