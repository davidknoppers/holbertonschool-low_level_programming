#include "holberton.h"
/**
 *  _strlen_recursion - find length of string, recursively
 *
 * @s: pointer to beginning of string
 * Return: int representing string length
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
