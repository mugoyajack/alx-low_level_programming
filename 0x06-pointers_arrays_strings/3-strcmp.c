#include "main.h"
/**
 * _strcmp- compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: j
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != 0; i++)
	{
		j = s1[i] - s2[i];
		if (j != 0)
			return (j);
	}
	return (j);
}
