#include <stdio.h>
/**
 * main - all unique combinations of two digits, in ascending order
 * Return: the above, separated by commas and spaces
 */

int main(void)
{
int n;
int i;
int temp;
for (n = 0 ; n <= 8; n++)
{
if (n == 0)
{
temp = 1;
}
else
{
temp = n + 1;
}
for (i = temp ; i <= 9; i++)
{
putchar('0' + n);
putchar('0' + i);
if (n != 8 || i != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
