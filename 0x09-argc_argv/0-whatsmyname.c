#include <stdio.h>
/**
 * main - prints the dynamic name of the first program
 *
 * @argc: number of items in argv
 * @argv: items passed to array, as strings
 * Return: 0 upon success or failure
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
