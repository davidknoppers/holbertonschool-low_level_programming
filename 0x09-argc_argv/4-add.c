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
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) && atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", sum);
	return (0);
}
