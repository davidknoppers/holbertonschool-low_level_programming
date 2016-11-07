#include <stdio.h>
#include <stdlib.h>
/**
 * arrchange - finds smallest change with arrays
 *
 * @val: value remaining, in cents
 * Return: minimum change, as an int
 */
int arrchange(int amount)
{
	int i, j;
	int bestmins[amount + 1];
	int lastcoinused[amount + 1];
	int coins[] = {1, 2, 5, 10, 15, 25};
	bestmins[0] = 0;
	for (i = 1; i <= amount; i++)
	{
		bestmins[i] = 1000000;
		lastcoinused[i] = -1;
	}
	for (j = 0; j <= (sizeof(coins) / sizeof(int)); j++)
	{
		for (i = 1; i <= amount; i++)
		{
			if (i >= coins[j])
				{
					if (bestmins[i - coins[j]] + 1
					    < bestmins[i])
					{
						bestmins[i] = 1 +
							bestmins[i - coins[j]];
						lastcoinused[i] = j;
					}
				}
		}
	}
	return (bestmins[amount]);
}
/**
 * main - returns minimum # of coins for change
 *
 * @argc: num of items
 * @argv: items, as array of strings
 * Return: sum or Error
 */
int main(int argc, char *argv[])
{
	int i, result;

	if (argc != 2 || !(atoi(argv[1])))
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	result = arrchange(i);
	printf("%d\n", result);
	return (0);
}
