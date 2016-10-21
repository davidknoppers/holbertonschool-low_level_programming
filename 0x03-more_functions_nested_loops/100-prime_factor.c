#include <stdio.h>
/**
 * main - finds largest prime factor
 *
 * Return: said factor
 */
int main(void)
{
	long n, start, best;

	n = 612852475143;
	best = 0;
	start = 3;
	while ((start * start) <= n)
	{
		if (n % start == 0)
		{
			n = n / start;
			best = start;
		}
		else
		{
			start += 2;
		}
	}
	if (n > best)
	{
		best = n;
	}
	printf("%ld\n", best);
	return (0);
}
