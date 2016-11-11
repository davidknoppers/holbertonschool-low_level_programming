#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: a given string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	unsigned int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
/**
 * digitcheck - checks numbers for IMPOSTERS
 *
 * @s: a given string
 * Return: 1 for valid, 0 for IMPOSTER DETECTED
 */
int digitcheck(char *s)
{
	for (; *s != '\0'; s++)
	{
		if (*s > '9' || *s < '0')
			return (0);
	}
	return (1);
}
/**
 * _puts - prints a given string using pointers
 *
 * @str: a pointer to a string
 * Return: none
 */
void _puts(char *str)
{
	int n;

	for (n = 0; *(str + n) != '\0'; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
/**
 * main - multiplies two ints, eventually
 *
 * @argc: int, number of items
 * @argv: items passed, in array
 * Return: product upon success, otherwise Error/98
 */

int main(int argc, char *argv[])
{
	char *result;
	int carry, shift, product, sum, num, i, j, end;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	if (digitcheck(argv[1]) == 0 || digitcheck(argv[2]) == 0)
	{
		_puts("Error");
		exit(98);
	}
	result = malloc((_strlen(argv[1]) + _strlen(argv[2])) * sizeof(int));
	if (result == NULL)
	{
		_puts("Error");
		exit(98);
	}
	end = _strlen(argv[1]) + _strlen(argv[2]) - 1;
	for (j = _strlen(argv[2]) - 1; j >= 0; j--)
	{
		carry = 0;
		shift = end;
		for (i = _strlen(argv[1]) - 1; i >= 0; i--)
		{
			product = (argv[1][i] - '0') * (argv[2][j] - '0');
			sum = product + result[shift] + carry;
			num = sum % 10;
			carry = sum / 10;
			result[shift] = num + '0';
			shift--;
		}
		result[shift] = result[shift] + carry;
		end--;
	}
	_puts(result);
	return (0);
}
