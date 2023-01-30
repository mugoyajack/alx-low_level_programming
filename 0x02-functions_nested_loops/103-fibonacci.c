#include <stdio.h>
/**
 * main - Print sum of even fibonnaci terms below 4,000,000
 * Return: 0
 */
int main(void)
{
	int prev, curr, temp, sum;

	temp = 1;
	prev = 0;
	curr = 0;
	sum = 0;
	while (curr <= 4000000)
	{
		curr = temp + prev;
		prev = temp;
		temp = curr;

		if (curr % 2 == 0)
		{
			sum = sum + curr;
		}
	}
	printf("%d\n", sum);
	return (0);
}
