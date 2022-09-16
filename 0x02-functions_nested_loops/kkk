#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long a = 0;
	unsigned long b = 2;
	unsigned long sum;
	unsigned long j;
	unsigned long k;
	unsigned long x;
	unsigned long y;
	unsigned long n;
	unsigned long m;

	for (i = 0; i < 92; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}
	j = a / 10000000000;
	x = b / 10000000000;
	k = a % 10000000000;
	y = b % 10000000000;

	for (i = 93; i < 99; i++)
	{
		n = j + k;
		m = x + y;
		if (x + y > 9999999999)
		{
			n += 1;
			m %= 10000000000;
		}
		printf("%lu%lu", n, m);
		if (i != 98)
			printf(", ");

		j = x;
		k = y;
		x = n;
		y = m;
	}
	printf("\n");
	return (0);
}
