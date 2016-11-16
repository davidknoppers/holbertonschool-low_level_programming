#include "calc.h"

int main(int argc, char *argv[])
{
	int a, b, c;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = (*get_op_func(argv[2]))(a, b);
	if (!(c))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", c);
	return (0);
}
