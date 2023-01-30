#include <stdio.h>
/**
 * main - Print first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int prev, curr, i, temp;

	temp = 1;
	prev = 0;
	curr = 0;
	for (i = 1; i <= 50; i++)
	{
		curr = temp + prev;
		prev = temp;
		temp = curr;
		if (i <= 49)
		{
			printf("%li, ", curr);
		}
		else
		{
			printf("%li\n", curr);
		}
	}
	return (0);
}
