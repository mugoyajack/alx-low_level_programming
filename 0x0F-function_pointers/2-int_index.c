#include "function_pointers.h"
/**
 * int_index - function
 * @array: string
 * @size: size
 * @cmp: pointer to function that is doing the comparison
 * Return: -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if ((cmp(array[i])) != 0)
			return (i);
		}
	}
	return (-1);
}
