#include "main.h"
/**
 * main - multiplies two nums
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if error 1.
 */
int main(int argc, char **argv)
{
	int a = 0, b = 0, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;

	printf("%d\n", mult);
	return (0);
}
