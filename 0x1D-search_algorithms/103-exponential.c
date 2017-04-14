#include "search_algos.h"
/**
 * binary_search_recursive - classical O(log(n)) search algo
 * The "_recursive" is here as to not confuse the compiler
 * and to distinguish this from the similar-but-iterative
 * version of binary search in file 1
 * @array: ptr to first element in arr of ints
 * @lower: lower index of array
 * @upper: upper index of array
 * @value: the int value that we hope to find
 * Return: the index of the value if found, -1 otherwise
 */
int binary_search_recursive(int *array, size_t lower, size_t upper, int value)
{
	size_t middle, i;

	if (!array || lower > upper)
		return (-1);

	while (lower <= upper)
	{
		printf("Searching in array: ");
		for (i = lower; i < upper; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[upper]);
		middle = (lower + upper) / 2;
		if (array[middle] < value)
			lower = middle + 1;
		else if (array[middle] > value)
			upper = middle;
		else
			return (middle);
	}
	return (-1);
}
/**
 * exponential_search - traverses by powers of 2 in order to find
 * a subset within which to call a binary search
 * then performs a binary search on that subset
 * MIN is a macro defined in the header file
 * @array: ptr to first element in int array
 * @size: number of elements in the array
 * @value: the number we hope to find in the array
 * Return: index if the number if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t test, low, high;

	if (!array || size <= 0)
		return (-1);

	test = 1;
	while (test < size && array[test] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", test, array[test]);
		test *= 2;
	}
	if (test < size)
		printf("Value checked array[%lu] = [%d]\n", test, array[test]);
	low = test / 2;
	high = MIN(test, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_recursive
		(array, test / 2, MIN(test, size - 1), value));
}
