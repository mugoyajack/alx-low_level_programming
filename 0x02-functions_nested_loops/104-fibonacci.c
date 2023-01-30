#include <stdio.h>
/**
 * main - Print first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int prev, curr, i, temp;

	temp = 1;
	prev = 0;
	curr = 0;
	for (i = 1; i <= 98; i++)
	{
		curr = temp + prev;
		prev = temp;
		temp = curr;
		if (i < 98)
		{
			printf("%lu, ", curr);
		}
		else
		{
			printf("%lu\n", curr);
		}
	}
	return (0);
}
