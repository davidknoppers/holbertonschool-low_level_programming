#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory from inst of dog
 * @d: dog to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
