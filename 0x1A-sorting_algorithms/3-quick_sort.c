#include "sort.h"
/**
 * hoare_partition - quicksort's heavy lifting happens here
 * @size: is passed all over the place bc we need it for print
 * @array: is a pointer to the start of the array
 * @left: starts as the leftmost ele and moves
 * @right: starts as the rightmost and also moves
 * Return: int that will be the new pivot
 * credit to:
 * http://stackoverflow.com/questions/7198121/quicksort-and-hoare-partition
 */
int hoare_partition(int *array, int left, int right, size_t size)
{
	int i, j, pivot, temp;

	pivot = array[right];
	i = left - 1, j = right + 1;
	while (1)
	{
		do {
			i++;
		}
		while (array[i] < pivot);
		do {
			j--;
		}
		while (array[j] > pivot);
		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
		else
		{
			return (i);
		}
	}
}
/**
 * qs_helper - finds the pivot and recursively calls the partition
 * @size: is passed all over the place bc we need it for print
 * @array: is a pointer to the start of the array
 * @left: starts as the leftmost ele and moves
 * @right: starts as the rightmost and also moves
 * Return: none
 */

void qs_helper(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = hoare_partition(array, left, right, size);
		qs_helper(array, left, pivot - 1, size);
		qs_helper(array, pivot, right, size);
	}
}
/**
 * quick_sort - wrapper for actual quicksort
 * @size: is passed all over the place bc we need it for print
 * @array: is a pointer to the start of the array
 * Return: none
 */

void quick_sort(int *array, size_t size)
{
	if (size > 1)
		qs_helper(array, 0, (int) size - 1, size);
}
