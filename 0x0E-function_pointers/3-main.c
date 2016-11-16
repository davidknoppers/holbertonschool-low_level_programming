#include "calc.h"

int main(int argc, char *argv[])
{
	int a, b;
	int (*fn)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fn = (get_op_func(argv[2]));
	if (fn == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", fn(a, b));
	return (0);
}
