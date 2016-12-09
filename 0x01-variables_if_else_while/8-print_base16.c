#include <stdio.h>
/**
 * main - prints all numbers of base64, followed by a newline
 * Return: 012345678abcdef
 */

int main(void)
{
	char ch;
	int n;
	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	for (ch = 'a' ; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
