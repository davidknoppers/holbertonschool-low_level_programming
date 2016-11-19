#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings!
 *
 * @separator: string separator
 * @n: number of inputs after separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *temp;

	if (n < 1)
	{
		putchar('\n');
		return;
	}
	va_start(ap, n);

	for (i = 0; i < (n - 1); i++)
	{
		temp = va_arg(ap, char*);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%s\n", va_arg(ap, char*));
	va_end(ap);
}
