#include "holberton.h"
#include <stdio.h>

int main(void)
{
	unsigned int sum, start;

	sum = 0;
	start = 3;
	while(start < 1023)
	{
		sum += start;
		start += 3;
	}
	start = 5;
	while(start < 1020)
	{
		sum += start;
		start += 5;
	}
	printf("%u\n",sum);
	return;
}
