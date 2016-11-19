#ifndef _VARIADIC_FUN_TIME_
#define _VARIADIC_FUN_TIME_

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printbox - holds all my print functions
 *
 * @letter: letter telling me which fn to use
 * @f: function to use
 */
typedef struct printbox
{
	char *letter;
	void (*f)();
} print_t;
#endif
