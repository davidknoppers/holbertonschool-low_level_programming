#include "calc.h"

/**
 * get_op_func - gets the right fn for main to execute
 *
 * @s: pointer to char
 * Return: appropriate calculation or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
        int (*fns[5])(int, int);
        char ops[] = {'+','-','/','*','%'};

        fns[0] = op_add;
        fns[1] = op_sub;
        fns[2] = op_div;
        fns[3] = op_mul;
        fns[4] = op_mod;
	while (i < 5)
	{
		if (ops[i] == *s)
			      return (fns[i]);
		i++;
	}
	return (NULL);
}
