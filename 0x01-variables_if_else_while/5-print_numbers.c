#include <stdio.h>
/**
 * main - prints the digits 0 through 9
 * Return: 0 through 9 followed by a newline
 */

int main(void)
{
	int n;
	for (n = 0 ; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
