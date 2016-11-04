#include <stdio.h>
/**
 * main - prints arguments from argv, line by line
 *
 * @argc: # of arguments on argv
 * @argv: arguments passed, in string form
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
