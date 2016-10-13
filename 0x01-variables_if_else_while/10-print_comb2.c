#include <stdio.h>
/**
 * main - prints 01 through 99, in ascending order
 * Return: 01 through 99, separated by commas
 */

int main(void)
{
int n;
int i;
for (n = 0 ; n <= 9; n++)
{
for (i = 0 ; i <= 9; i++)
{
putchar('0' + n);
putchar('0' + i);
if (n != 9 || i != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
