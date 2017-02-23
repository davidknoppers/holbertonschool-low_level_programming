#include "sort.h"
/**
 * shell_sort - uses insertion sort on subsets of an array
 * excellent efficiency on small and medium-sized arrays
 * canonical implementation adapted from Sedgewick & Wayne
 * @array: ptr to head of array
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	if (!array || size < 2)
		return;
	gap = 1;
	while (gap < size / 3)
		gap = gap * 3 + 1;
	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i; j >= gap && array[j] < array[j - gap];
			     j -= gap)
			{
				temp = array[j];
				array[j] = array[j - gap];
				array[j - gap] = temp;
			}
		}
		print_array(array, size);
		gap /= 3;
	}
}
