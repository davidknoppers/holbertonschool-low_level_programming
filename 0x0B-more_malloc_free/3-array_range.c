#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - makes an int array with pointers and malloc
 *
 * @min: min int in array
 * @max: max int int array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	unsigned int i;
	unsigned int range;
	int *arr, j;

	if (min > max)
		return (NULL);
	range = max - min;
	arr = malloc((range + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		*(arr + i) = j;
	return (arr);
}
