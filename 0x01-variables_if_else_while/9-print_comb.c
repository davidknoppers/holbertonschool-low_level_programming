#include <stdio.h>
/**
 * main - prints 1 through 9, in ascending order, using loops and conditionals
 * Return: 1 through 9, separated by commas
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
