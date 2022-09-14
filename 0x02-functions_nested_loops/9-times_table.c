#include "main.h"
/**
 * times_table - 9 x n
 */
void times_table(void)
{
	int i;

	for  (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int n = j * i;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (n <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
