#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - takes pointer to dog and initializes components
 *
 * @d: pointer to dog
 * @name: name of the very good dog
 * @age: dogs are ageless and forever
 * @owner: dogs rule
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
