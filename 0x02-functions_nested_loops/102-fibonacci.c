#include <stdio.h>
/**
 * main -header
 * Return: 0
 */
int main(void)
{
	int i;
	long int x = 0;
	long int y = x + 1;
	long int z = x + y;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", z);
		x = y;
		y = z;
		z = x + y;
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
