#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints me some codes
 *
 * @str: input string
 * @j: bytes to print
 * Return: none
 */
void print_opcodes(char *str, int j)
{
	int i;

	i = 0;
	while (i < (j - 1))
	{
		printf("%02hhx ", str[i]);
		i++;
	}
	printf("%02hhx\n", str[i]);
}
/**
 * main - prints opcodes from own function
 *
 * @argc: number of arguments, hopefully 1
 * @argv: arguments passes as strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, bytes);
	return (0);
}
