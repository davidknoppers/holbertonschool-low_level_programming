#include "sort.h"
/**
 * find_max - subroutine that finds of two leaves of a node
 * @array: ptr to head of array
 * @size: size of the array/heap
 * @root: the current root of the heap
 * @l: left leaf
 * @r: right leaf
 * Return: index of max leaf
 */
size_t find_max(int *array, size_t size, size_t root, size_t l, size_t r)
{
	size_t max = root;

	if (l < size && array[l] > array[max])
		max = l;
	if (r < size && array[r] > array[max])
		max = r;
	return (max);
}
/**
 * heapify - subroutine that recursively sets array to hold the max-heap ppty
 * @array: ptr to head of array
 * @size: size of the array/heap
 * @root: the current root of the heap
 * @permasize: size of the total array to enable printing within all calls
 */
void heapify(int *array, size_t size, size_t root, size_t permasize)
{
	size_t max;
	int temp;

	while (1)
	{
	max = find_max(array, size, root, 2 * root + 1, 2 * root + 2);
	if (max == root)
		break;
	temp = array[root];
	array[root] = array[max];
	array[max] = temp;
	print_array(array, permasize);
	root = max;
	}
}
/**
 * heap_sort - implementation of the classic, sorts in ascending order
 * @array: ptr to head of array
 * @size: size of the array/heap
 */
void heap_sort(int *array, size_t size)
{
	size_t i;
	int temp;

	if (!array || size < 2)
		return;
	for (i = (size - 2) / 2 + 1; i > 0; i--)
		heapify(array, size, i - 1, size);
	for (i = size; i > 0; i--)
	{
		temp = array[0];
		array[0] = array[i - 1];
		array[i - 1] = temp;
		if (array[0] != array[i - 1])
			print_array(array, size);
		heapify(array, i - 1, 0, size);
	}
}
