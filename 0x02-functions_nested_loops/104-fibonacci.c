#include <stdio.h>
/*
 * main - header file
 * Return: 0
 */
int main(void)
{
	int i = 2;

	float x = 1;
	float y = x + 1;
	float z = x + y;

	printf("%.0f, ", x);
	printf("%.0f, ", y);
	while (i < 98)
	{
		i++;
		printf("%.0f", z);
		x = y;
		y = z;
		z = x + y;
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
