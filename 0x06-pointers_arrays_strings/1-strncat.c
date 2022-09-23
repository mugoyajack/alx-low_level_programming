#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string destination
 * @src: string to concantenate
 * @n: size
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0, size = 0;

	for (; dest[size] != '\0'; size++)
	{}
	for (c = 0; ((c < n) && (src[c] != '\0')); c++)
	{
		dest[size + c] = src[c];
	}
	dest[size + c] = '\0';
	return (dest);
}
