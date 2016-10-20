#include <stdio.h>
/**
 * main - prints the classic fizzbuzz output
 * Return: none
 */

int main(void)
{
	int start;

	for (start = 1; start <= 100; start++)
	{
		if (start % 3 == 0 && start % 5 != 0)
		{
			printf("Fizz");
		}
		else if (start % 3 != 0 && start % 5 == 0)
		{
			printf("Buzz");
		}
		else if (start % 3 == 0 && start % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", start);
		}
		if (start != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
