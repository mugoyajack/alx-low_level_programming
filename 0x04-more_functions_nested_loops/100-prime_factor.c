#include <stdio.h>
#include <math.h>
/**
 * main - Find and print the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long largest_factor = 1;
	long i;

	for (i = 2; i <= sqrt(num); i++)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}

	if (num > largest_factor)
	{
		largest_factor = num;
	}

	printf("%ld\n", largest_factor);
	return (0);
}
