#include "holberton.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: the input string
 * Return: the converted int
 */
int _atoi(char *s)
{
	int n, sign, result;

	sign = 1;
	result = 0;
	for (n = 0; *(s + n) != '\0'; n++)
	{
		if (*(s + n) == '-')
		{
			sign *= -1;
		}
		if (*(s + n) >= '0' && *(s + n) <= '9')
		{
			result = 10 * result - (*(s + n) - '0');
		}
		if (result < 0 && (*(s + n) < '0' || *(s + n) > '9'))
		{
			break;
		}
	}
	if (sign > 0)
	{
		result *= -1;
	}
	return (result);
}
