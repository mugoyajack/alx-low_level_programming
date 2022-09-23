#include "main.h"
/**
 * leet - encodes a string to 1337 encoding scheme
 * @a: pointer to array.
 * Return: the modified array
 **/
char *leet(char *a)
{
	int i, j;
	char let[] = {97, 101, 111, 116, 108};
	char num[] = {52, 51, 48, 55, 49};

	for (i = 0; a[i] != 0; i++)
	{
		for (j = 0; let[j] != 0; j++)
		{
			if ((a[i] == let[j]) || (a[i] == let[j] - 32))
				a[i] = num[j];
		}
	}
	return (a);
}
