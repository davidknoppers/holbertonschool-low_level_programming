#include "sort.h"

/**
 * selection_sort - n^2 num sorting algo
 * @array: input array
 * @size: size of input array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index, temp;

	for (i = 0; i < size - 1 ; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (i != min_index)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
