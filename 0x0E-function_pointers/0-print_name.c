#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name via parameter fn
 * @name: input string
 * @f: input fn
 * Return: none
 */
void print_name(char *name, void (*f)(char *chr))
{
	(*f)(name);
}
