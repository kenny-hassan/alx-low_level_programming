#include <stdio.h>
/**
 * main - entry
 * Return: alway returns 0
 */
int main(void)
{
	unsigned char j = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(j);
		j++;
	}
	j = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + i);
		j++;
		putchar('\n');
		return (0);
}
