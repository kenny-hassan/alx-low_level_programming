#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array of int
 * @n: number of element to swap
 */
void reverse_array(int *a, int n)
{
	int i, j, k, *l;

	l = a;
	for (i = 1; i < n; i++)
	{
		l++;
	}
	for (j = 0; j < i / 2; j++)
	{
		k = a[j];
		a[j] = *l;
		*l = k;
		l--;
	}
}
