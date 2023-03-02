#include "main.h"

/**
 * swap_int - receives two parameters and exchanges the value of one for the other
 * @a: first pointer
 * @b: second pointer
 * return: inter
 */


void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
