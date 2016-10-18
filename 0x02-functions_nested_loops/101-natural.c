#include "holberton.h"
#include <stdio.h>
/**
 * main - calculates and returns sum
 *
 *
 * Return: void, after printing sum
 */

int main(void)
{
	long sum, start;

	sum = 0;
	start = 3;
	while (start < 1023)
	{
		sum += start;
		start += 3;
	}
	start = 5;
	while (start < 1020)
	{
		sum += start;
		start += 5;
	}
	printf("%ld\n", sum);
	return (0);
}
