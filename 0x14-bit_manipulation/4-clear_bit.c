#include "main.h"
/**
 * clear_bit - sets the value  of a bit to 0 at a given index
 * @n: the value
 * @index: the index of the bit to set
 * Return: 1 if it works otherwise -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
