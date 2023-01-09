#include "main.h"
/**
 * flip_bits - gives the number of bits you need to flip to
 * get from one number to another
 * @n: the inital number
 * @m: number to flip to
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b;

	for (b = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			b++;
	}

	return (b);
}