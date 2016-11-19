#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints dang near anything! Adapted from K & R p. 156
 *
 * @format: string indicating what to expect and print
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, c;
	double f;
	char *s;
	const char *fmtr;

	fmtr = format;
	va_start(ap, format);
	while (*fmtr)
	{
		switch (*fmtr++)
		{
		case 'c':
			c = (char) va_arg(ap, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(ap, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		if (*(fmtr) != '\0' && (*fmtr == 'c' || *fmtr == 'f'
				       || *fmtr == 'i' || *fmtr == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
