#include <stdio.h>
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
/**
 * main - sums and returns numbers, assuming proper input
 *
 * @argc: num of items
 * @argv: items, as array of strings
 * Return: sum or Error
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (_atoi(argv[i]))
			sum += _atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", sum);
	return (0);
}
