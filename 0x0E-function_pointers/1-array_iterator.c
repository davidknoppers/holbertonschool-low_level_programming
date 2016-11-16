#include "function_pointers.h"
/**
 * array_iterator - executes function on elements of array
 * @array: take a guess as to what this is
 * @size: size of array
 * @action: pointer to fn that takes an int and returns void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
