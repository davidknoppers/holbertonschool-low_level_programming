#include "sort.h"
size_t hoare_partition(int *array, size_t right)
{
	size_t i, j;
	int temp, pivot;

	pivot = array[right];
	printf("pivot is %d\n", pivot);

	i = 0, j = right;
	while (i <= j)
	{
		while (array[i] < pivot)
			i++;
		printf("i is %d\n", array[i]);
		while (array[j] > pivot)
			j--;
		printf("j is %d\n", array[j]);
		if (i <= j)
		{
			print_array(array, right + 1);
			printf("a swap should occur between %d and %d\n", array[i], array[j]);
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, right + 1);
			i++;
			j--;
		}
	}
	return (i);
}

void quick_sort(int *array, size_t size)
{
	size_t pivot;

	static size_t right;

	right = size - 1;

	if (size <= 1)
		return;

	pivot = hoare_partition(array, right);
	quick_sort(array, pivot);
	quick_sort(array + pivot, size - pivot);
}
