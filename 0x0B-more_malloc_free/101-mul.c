#include <stdio.h>
#include <stdlib.h>
int digitcheck(str)
{
}
/**
 * main - multiplies two ints, eventually
 *
 * @argc: int, number of items
 * @argv: items passed, in array
 * Return: product upon success, otherwise Error/98
 */

int main(int argc, char *argv[])
{
	unsigned int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit (98);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
