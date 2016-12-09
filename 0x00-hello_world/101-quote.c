#include <stdio.h>
#include <unistd.h>

/**
 * main - writes message to stderror and returns 1
 * Return: 1 in all cases
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
