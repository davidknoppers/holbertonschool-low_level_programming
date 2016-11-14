#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - make instance of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name of dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *instance;

	instance = malloc(sizeof(dog_t));
	if (instance == NULL)
		return (NULL);
	instance->name = name;
	instance->age = age;
	instance->owner = owner;
	return (instance);
}
