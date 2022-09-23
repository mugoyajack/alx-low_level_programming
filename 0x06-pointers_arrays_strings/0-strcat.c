#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string destination
 * @src: string to concatenate
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, size = 0;

	for (; dest[size] != '\0'; size++)
	{}
	for (count = 0; src[count] != '\0'; count++)
	{
		dest[size + count] = src[count];
	}
	dest[size + count] = '\0';
	return (dest);
}
