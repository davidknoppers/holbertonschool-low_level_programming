#include <stdio.h>

/**
 * main - calculates and returns sum
 * Return: void, after printing sum
 */

int main(void)
{
	long sum, start;

	sum = 0;
	for (start = 3; start < 1024; start++)
		if (start % 3 == 0 || start % 5 == 0)
		{
			sum += start;
		}
	printf("%ld\n", sum);
	return (0);
}
