#include "holberton.h"
/**
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int temp, i, j, end;

	end = n/2;
	for (i = 0; i <= end; i++)
	{
		j = n-(i+1);
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
