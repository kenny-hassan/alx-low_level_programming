#include <stdio.h>
/**
 * main - standard io
 * Return: 0
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
	printf(", ");
}
