#include "sort.h"
#include <stdio.h>
/**
 * get_max - subroutine to get the maximum int in an array
 * the max is used to determine the size of the array to malloc
 * @array: ptr to head of array
 * @size: size of said array
 * Return: int representing the max
 */
int get_max(int *array, size_t size)
{
	size_t i;
	int max_so_far;

	max_so_far = array[0];

	for (i = 0; i < size; i++)
	{
		if (array[i] > max_so_far)
			max_so_far = array[i];
	}
	return (max_so_far);
}
/**
 * counting_sort - clever paradigm mostly used as subroutine for radix
 * @array: ptr to head of array
 * @size: size of array
 */
void counting_sort(int *array, size_t size)
{
	int *array_of_counts;
	int max, i;
	size_t j;

	if (!array || size < 2)
		return;
	max = get_max(array, size);
	max++;
	array_of_counts = malloc((max) * sizeof(int));
	if (!array_of_counts)
		return;
	for (i = 0; i < max; i++)
		array_of_counts[i] = 0;
	for (j = 0; j < size; j++)
		array_of_counts[array[j]]++;
	for (i = 1; i < max; i++)
	{
		array_of_counts[i] += array_of_counts[i - 1];
	}
	print_array(array_of_counts, max);
	i = j = 0;
	while (j <= size)
	{
		while (array_of_counts[i] > 0)
		{
			array[j] = i;
			array_of_counts[i]--;
			j++;
			if (j > size)
				break;
		}
		i++;
	}
	print_array(array, size);
	free(array_of_counts);
}
