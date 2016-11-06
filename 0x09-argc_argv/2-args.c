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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
