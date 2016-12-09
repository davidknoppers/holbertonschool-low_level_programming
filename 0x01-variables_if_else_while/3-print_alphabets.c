#include <stdio.h>
/**
 * main - prints the lowercase alphabet and uppercase alphabet
 * Return: the alphabets, followed by a newline
 */

int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
