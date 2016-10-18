#include <stdio.h>

/**
 * main - computes and prints fibonacci numbers
 *
 * Return: none
 */

int main(void)
{
	long next, a, b, sum;
	int counter, start;

	start = 2;
	sum = 2;
	counter = 35;
	a = 1;
	b = 2;
	while (start < counter)
	{
		next = a + b;
		if (next % 2 == 0 && next < 4000000)
		{
			sum += next;
		}
		a = b;
		b = next;
		start++;
	}
	printf("%ld\n", sum);
	return (0);
}
