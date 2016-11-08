#include <stdio.h>

/**
 * main - incorporates a manual version of atoi to add nums
 * @argc: int, number of arguments
 * @argv: array of strings of those arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, num, result;

	num = 0, result = 0;
	i = 1;
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				num = num * 10 + *argv[i] - '0';
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			argv[i]++;
		}
		result = result + num;
		num = 0;
		i++;
	}
	printf("%d\n", result);
	return (0);
}
