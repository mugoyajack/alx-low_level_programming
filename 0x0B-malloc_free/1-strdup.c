#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string to  copy
 * Return: pointer to new string.
 */
char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (len = 0; string[len] != '\0'; len++)
		;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
