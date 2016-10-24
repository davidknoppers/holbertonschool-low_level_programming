#include "holberton.h"
/**
 * swap_int - swaps ints a and b
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
