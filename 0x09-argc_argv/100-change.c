#include <stdio.h>
#include <stdlib.h>
/**
 * main - uses greedy algo to return min coi count
 * @argc: int, number of arguments
 * @argv: array of args as strings
 *
 * Return: min # of coins, or 1 upon error
 */
int main(int argc, char *argv[])
{
	int cc, remain;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	remain = atoi(argv[1]);
	cc = 0;
	while (remain >= 25)
	{
		cc++;
		remain -= 25;
	}
	while (remain >= 10)
	{
		cc++;
		remain -= 10;
	}
	while (remain >= 5)
	{
		cc++;
		remain -= 5;
	}
	while (remain >= 2)
	{
		cc++;
		remain -= 2;
	}
	while (remain >= 1)
	{
		cc++;
		remain -= 1;
	}
	printf("%d\n", cc);
	return (0);
}
