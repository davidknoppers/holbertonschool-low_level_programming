#include <stdio.h>
/**
 * main - computes and prints fibonacci numbers
 *
 * Return: none
 */

int main(void)
{
	unsigned long next, a, b;
	int counter, start;

	start = 2;
	counter = 50;
	a = 1;
	b = 1;
	printf("%lu, %lu, ", a, b);
	while (start < counter)
	{
		next = a + b;
		printf("%lu, ", next);
		a = b;
		b = next;
		start++;
	}
	printf("%lu\n", a + b);
}
