#include "main.h"
#include  "6-abs.c"
/**
 * print_last_digit - main
 * @i: arguement
 * Return: 1
 */
int print_last_digit(int i)
{
	int n = _abs(i % 10);

	_putchar('0' + _abs(i % 10));
	return (n);
}
