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
void print_c(va_list c, char *s)
{
	printf("%s%c", s, va_arg(c, int));
}

/**
 * print_i - prints ints
 * @c: int to print
 * @s: separator
 * Return: none
 */
void print_i(va_list c, char *s)
{
	printf("%s%d", s, va_arg(c, int));
}

/**
 * print_f - prints floats
 * @c: double for byte purposes
 * @s: separator
 * Return: none
 */
void print_f(va_list c, char *s)
{
	printf("%s%f", s, va_arg(c, double));
}

/**
 * print_s - prints strings
 * @c: pointer to string
 * @s: separator
 * Return: none
 */
void print_s(va_list c, char *s)
{
	char *temp;

	temp = va_arg(c, char *);
	if (temp == NULL)
		temp = "(nil)";
	printf("%s%s", s, temp);
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
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (format[j] == (*funcs[i].letter))
			{
				funcs[i].f(ap, s);
				s = (", ");
			}
			i++;
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
