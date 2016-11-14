#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints me a doggie
 *
 * @d: pointer to doggie
 * Return: none
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %s\n", nil);
	else
		printf("Name: %s\n", d->name);
	if (!(d->age == d->age))
		printf("Age: %s\n", nil);
	else
		printf("Age: %.2g\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %s\n", nil);
	else
		printf("Owner: %s\n", d->owner);
}
