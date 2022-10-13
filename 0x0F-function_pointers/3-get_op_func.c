#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - selects correct function
 * @s: operator
 * Return: pointer to correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (*(s + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	while ((ops[i].op != NULL) && (*s != *ops[i].op))
	{
		i++;
	}
	return (ops[i].f);
}
