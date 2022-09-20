#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: value 1
 * @b: value 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
