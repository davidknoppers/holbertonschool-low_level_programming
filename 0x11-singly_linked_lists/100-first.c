/**
 * premain - a lil trick to execute a call before main
 *
 *
 */
#include <stdio.h>

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
