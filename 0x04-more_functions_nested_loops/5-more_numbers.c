#include "main.h"
/**
 * more_numbers - print 0 - 14 X10
 */
void more_numbers(void)
{
	int i, j;

	i = j = 0;
	while (i < 10)
	{
		while (j <= 14)
		{
			while (j <= 14)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			++j
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
