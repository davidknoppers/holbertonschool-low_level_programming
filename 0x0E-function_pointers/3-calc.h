#ifndef _CALC_H_
#define _CALC_H_

int (*get_op_func(char *s))(int, int);

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

#endif
