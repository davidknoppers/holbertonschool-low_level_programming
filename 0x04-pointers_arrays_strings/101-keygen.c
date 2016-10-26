#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
* main - generates a funky password
*
* Return: 0 upon program completion
*/
int main(void)
{
	int final, rnum, sum;
	time_t t;

	sum = 0;
	srand((unsigned int) time(&t));
	while (sum < 2646)
	{
		rnum = (rand() % 1000) / 5;
		if (rnum >= 33 && rnum <= 126)
		{
			printf("%c", rnum);
	sum += rnum;
		}
	}
	final = 2772 - sum;
	printf("%c", final);
	return (0);
}
