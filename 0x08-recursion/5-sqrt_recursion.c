#include "main.h"
/**
 * _sqrt_recursion - square root
 * @n: integer arguement
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int j, i = 0;

	if (i * i != n)
	{
		if (i > n)
			return (-1);
		i = i + 1;
		j = _sqrt_recursion(n);
		return (j + 1);
	}
	if (_sqrt_recursion(n) == n && n != 1)
		return (-1);
	return (_sqrt_recursion(n));
}
