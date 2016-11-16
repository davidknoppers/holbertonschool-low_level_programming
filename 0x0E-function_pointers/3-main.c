#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - makes use of other fns to perform arithmetic
 *
 * @argc: number of inputs
 * @argv: array of inputs as strings
 * Return: Error or computed number
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*fn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	fn = (get_op_func(argv[2]));
	if (fn == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", fn(a, b));
	return (0);
}
