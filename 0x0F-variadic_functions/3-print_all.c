#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_c - prints chars
 * @c: an int for byte purposes
 * @s: separator
 * Return: none
 */
void print_c(int c, char *s)
{
	char g;

	g = (char)c;
	printf("%s%c", s, g);
}

/**
 * print_i - prints ints
 * @c: int to print
 * @s: separator
 * Return: none
 */
void print_i(int c, char *s)
{
	printf("%s%d", s, c);
}

/**
 * print_f - prints floats
 * @c: double for byte purposes
 * @s: separator
 * Return: none
 */
void print_f(double c, char *s)
{
	float k;

	k = (float)c;
	printf("%s%f", s, k);
}

/**
 * print_s - prints strings
 * @c: pointer to string
 * @s: separator
 * Return: none
 */
void print_s(char *c, char *s)
{
	if (c == NULL)
		c = "(nil)";
	else
		printf("%s%s", s, c);
}

/**
 * print_all - prints dang near anything
 * @format: string determining formatting for output
 * Return: none
 */
void print_all(const char * const format, ...)
{
	print_t funcs[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	int i, j;
	va_list ap;
	char *s;

	j = 0;
	s = "";
	va_start(ap, format);
	while (format[j] != '\0' && format != NULL)
	{
		i = 0;
		while (i < 4)
		{
			while (format[j] == *(funcs[i]).letter)
			{
				funcs[i].f(va_arg(ap, int), s);
				if (format[j + 1] != '\0')
					s = (", ");
				break;
			}
			i++;
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
