#include <unistd.h>
/**
 * main - prints Holberton
 * Return: "Holberton," followed by a newline
 */
int main(void)
{
	int _putchar(char c)
	{
		return (write(1, &c, 1));

	}
	_putchar('H');
	_putchar('o');
	_putchar('l');
	_putchar('b');
	_putchar('e');
	_putchar('r');
	_putchar('t');
	_putchar('o');
	_putchar('n');
	_putchar('\n');
	return (0);
}
