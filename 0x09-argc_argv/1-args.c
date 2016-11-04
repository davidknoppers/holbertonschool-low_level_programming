#include <stdio.h>
/**
 * main - counts argc
 *
 * @argc: # of items in main
 * @argv: items passed, as strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)(argv);

	printf("%d\n", argc - 1);
	return (0);
}
