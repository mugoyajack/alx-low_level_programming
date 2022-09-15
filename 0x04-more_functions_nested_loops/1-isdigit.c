#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if a character is a digit
 * @c: variable to check
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)

{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
