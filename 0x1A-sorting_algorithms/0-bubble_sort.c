#include "sort.h"
/**
 * bubble_sort - sorts an array using bubble sort, approximately n^2 time
 * Iterates through the entire array, then through the array -1, then -2, etc
 * Swaps integers when int on left > int on right
 * @array: pointer to array of ints
 * @size: size of the array
 * Return: none
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;
	int temp;

	flag = 0;
	if (size <= 1)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
		flag = 0;
	}
}
