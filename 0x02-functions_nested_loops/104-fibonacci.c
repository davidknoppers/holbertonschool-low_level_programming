#include <stdio.h>

/**
 * main - prints 98 fibonacci numbers after 1 and 2
 *
 * Return: none
 */

#define halver 10000000000

int main(void)
{
	long counter, x, y, next, add_fronts, add_backs;
	long front_x, front_y, back_x, back_y;

	x = 1;
	y = 2;
	counter = 0;
	printf("1, 2, ");
	while (counter < 89)
	{
		next = x + y;
		x = y;
		y = next;
		printf("%ld, ", next);
		counter++;
	}
	front_x = x / halver;
	back_x = x % halver;
	front_y = y / halver;
	back_y = y % halver;
	while (counter < 96)
	{
		add_fronts = front_x + front_y;
		add_backs = back_x + back_y;
		if (add_backs > halver)
		{
			add_fronts++;
			add_backs %= halver;
		}
		if (counter < 95)
		{
			printf("%ld%ld, ", add_fronts, add_backs);
			front_x = front_y;
			back_x = back_y;
			front_y = add_fronts;
			back_y = add_backs;
		}
		else
		{
			printf("%ld%ld\n", add_fronts, add_backs);
		}
		counter++;
	}
	return (0);
}
