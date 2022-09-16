#include "main.h"
/**
 * print_square - draws a square
 * @n: the number of #
 */

void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (i = 0; i < n; i++)
				for (i = 0; i < n; i++)
					_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
