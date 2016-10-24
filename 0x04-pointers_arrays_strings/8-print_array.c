#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints a specified number of chars from an array
 *
 * @a: a given array
 * @n: the number of chars to be printed
 * Return: none
 */

void print_array(int *a, int n)
{
	int start, digit;

	for (start = 0; start < n; start++)
	{
		digit = *(a + start);
		printf("%d", digit);
		if (*(a + start) != '\0' && start != (n - 1))
		{
			printf(", ");
		}
		else
		{
			printf("\n");
			return;
		}
	}
	printf("\n");
}
