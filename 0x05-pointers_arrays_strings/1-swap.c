#include "main.h"
/**
 * swap_int - swaps value of int *a & int *b
 * @a: first value
 * @b: second valu
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
