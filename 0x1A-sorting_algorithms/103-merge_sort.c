#include "sort.h"
#include <stdio.h>
void merge(int *array, int *aux, size_t low, size_t mid, size_t high)
{
	size_t i, j, k;
	printf("Merging...\n");
	i = low, j = mid + 1;
	printf("[left]: ");
	print_array(array, low);
	printf("[right]: ");
	print_array(array, mid);
	for (k = low; k <= high; k++)
		aux[k] = array[k];
	for (k = low; k <= high; k++)
	{
		if (i > mid)
			array[k] = aux[j++];
		else if (j > high)
			array[k] = aux[i++];
		else if (aux[j] < aux[i])
			array[k] = aux[j++];
		else
			array[k] = aux[i++];
	}
}
void sort(int *array, int *aux, size_t low, size_t high)
{
	size_t mid;

	if (high > low)
	{
		mid = low + (high - low)/2;
		sort(array, aux, low, mid);
		sort(array, aux, mid+1, high);
		printf("Merging...\n");
		merge(array, aux, low, mid, high);
	}
}
void merge_sort(int *array, size_t size)
{
	int *aux_array;
	aux_array = malloc(size * sizeof(int));
	if (aux_array == NULL)
		return;
	sort(array, aux_array, 0, size - 1);
	free(aux_array);
}
