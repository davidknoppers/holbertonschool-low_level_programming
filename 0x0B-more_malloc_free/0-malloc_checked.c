#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - confirms that a malloc actually worked
 *
 * @b: pointer to memory block to be checked
 * Return: pointer or 98, I guess?
 */
void *malloc_checked(unsigned int b)
{
	void *testptr;

	testptr = malloc(b);
	if (testptr == NULL)
		exit(98);
	return (testptr);
}
