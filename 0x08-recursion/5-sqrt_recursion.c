#include "main.h"
/**
 * test - test cases
 * @i: cases
 * @n: root arguement
 * Return: root
 */

int test(int i, int n)
{
	int m;

	if (i * i != n)
	{
		if (i > n)
			return (-1);
		m = test(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - square root
 * @n: integer arguement
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (test(i, n) == n && n != 1)
		return (-1);
	return (test(i, n));
}
