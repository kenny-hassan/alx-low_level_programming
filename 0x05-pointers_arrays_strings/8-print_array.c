#include <stdio.h>
#include "main.h"
/**
 * main - standard io
 * @a: pointer of array
 * @n: num of array
 * print_array - print an array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
