#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: a given string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
/**
 * _strcpy - copies and returns a string
 *
 * @dest: destination string, output
 * @src: string to be copied
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while ((dest[n] = src[n]) != '\0')
	{
		n++;
	}
	return (dest);
}
/**
 * _strdup - duplicates string using ye olde version of _strcpy
 *
 * @str: pointer to string
 * Return: pointer to duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *dup;

	if (str != NULL)
		dup = malloc(_strlen(str) + 1);
	else
		return (NULL);
	if (dup == NULL)
		return (NULL);
	_strcpy(dup, str);
	return (dup);
}
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
	instance->name = _strdup(name);
	if (instance->name == NULL)
	{
		free(instance);
		return (NULL);
	}
	instance->age = age;
	instance->owner = _strdup(owner);
	if (instance->owner == NULL)
	{
		free(instance->name);
		free(instance);
		return (NULL);
	}
	return (instance);
}
