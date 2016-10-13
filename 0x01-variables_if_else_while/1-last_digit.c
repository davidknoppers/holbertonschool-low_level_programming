#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a random number, chops the last digit, and classifies it
 * Return: the number, its last digit, and a brief description
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int lastnum;
lastnum = n % 10;
printf("last digit of %d is %d ", n, lastnum);
if (lastnum > 5)
{
printf("and is greater than 5\n");
}
else if (lastnum == 0)
{
printf("and is 0");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
