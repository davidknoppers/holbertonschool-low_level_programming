#include "holberton.h"
/**
 * reverse_array - reverses an array!
 *
 * @a: pointer to array of ints
 * @n: length of array
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int temp, i, j, end;

	if (n <= 0)
	{
		return;
	}
	end = n / 2;
	for (i = 0; i <= end; i++)
	{
		j = n - (i + 1);
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
