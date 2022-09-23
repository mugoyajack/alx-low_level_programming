#include "main.h"
/**
 * reverse_array - reverses ints in an array
 * @a: pointer to array
 * @n: number of ements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	i = n - 1;
	for (k = 0; k < i; k++, i--)
	{
		j = a[k];
		a[k] = a[i];
		a[i] = j;
	}
}
