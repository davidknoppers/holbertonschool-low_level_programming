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

	pivot = array[left];
	i = left, j = right;
	while (1)
	{
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;
		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
		else
		{
			return (j);
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
		qs_helper(array, pivot + 1, right, size);
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
	qs_helper(array, 0, size - 1, size);
}
