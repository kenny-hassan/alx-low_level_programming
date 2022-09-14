#include <stdio.h>
/**
 * main - header
 * Return: 0
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	puts(j);
	return (0);
}
