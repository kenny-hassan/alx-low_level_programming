#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array of int
 * @n: number of element to swap
 */
void reverse_array(int *a, int n)
{
	int k, j;

	k = n/2;
	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
