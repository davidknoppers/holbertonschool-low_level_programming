#include <stdio.h>

void print_to_98(int n)
{
	int start;
	if (n < 98)
	{
		for (start = n; start < 98; start++)
		{
			printf("%d, ",start);
		}
	}
	else if (n > 98)
	{
		for (start = n; start > 98; start--)
		{
			printf("%d, ",start);
		}
	}
	printf("98\n");
}
