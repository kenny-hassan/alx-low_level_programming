#include "main.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix
 * @a:matrix
 * @size:size
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		k += a[i];
		a -= size;
	}
	printf("%d, %d\n", j, k);
}
