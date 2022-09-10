#include <stdio.h>
/**
 * main -entry
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (; i < 10 ; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
