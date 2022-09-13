#include "main.h"
/**
 * _isalpha - check if a character is an alphabet
 * @c: char to check
 * Return: 1 if alpha 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
