#include <stdio.h>
/**
 * main - prints the lowercase alphabet backwards using a for loop
 * Return: the lowercase alphabet backwards, followed by a newline
 */

int main(void)
{
	char ch;
	for (ch = 'z' ; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
