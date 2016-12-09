#include <stdio.h>
/**
 * main - prints the lowercase alphabet using a for loop
 * Return: the lowercase alphabet followed by a newline
 */

int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
