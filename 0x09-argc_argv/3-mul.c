#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two ints, assuming proper input
 *
 * @argc: int, number of items
 * @argv: items passed, in array
 * Return: product upon success, otherwise -1
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (i);
}
