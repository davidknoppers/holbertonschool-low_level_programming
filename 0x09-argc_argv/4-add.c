#include <stdio.h>
#include <stdlib.h>
/**
 * main - sums and returns numbers, assuming proper input
 *
 * @argc: num of items
 * @argv: items, as array of strings
 * Return: sum or Error
 */
int main(int argc, char *argv[])
{
	int i, n, sum;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (n <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
