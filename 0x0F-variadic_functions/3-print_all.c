#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_c - prints chars
 * @c: an int for byte purposes
 * Return: none
 */
void print_c(int c)
{
	char g;

	g = (char)c;
	printf("%c", g);
}

/**
 * print_i - prints ints
 * @c: int to print
 * Return: none
 */
void print_i(int c)
{
	printf("%d", c);
}

/**
 * print_f - prints floats
 * @c: double for byte purposes
 * Return: none
 */
void print_f(double c)
{
	float k;

	k = (float)c;
	printf("%f", k);
}

/**
 * print_s - prints strings
 * @c: pointer to string
 * Return: none
 */
void print_s(char *c)
{
	if (c == NULL)
		printf("(nil)");
	else
		printf("%s", c);
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

	j = 0;
	va_start(ap, format);
	while (format[j] != '\0' && format != NULL)
	{
		i = 0;
		while (i < 4)
		{
			if (format[j] == *(funcs[i]).letter)
			{
				funcs[i].f(va_arg(ap, int));
				if (format[j + 1] != '\0')
					printf(", ");
				break;
			}
			i++;
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
