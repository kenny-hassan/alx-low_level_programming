#include <stdio.h>
/*
 * main -header file
 * Return: 0
 */
int main(void)
{
	int i;

	float x = 0;
	float y = x + 1;
	float z = x + y;

	for (i = 1; i < 98; i++)
	{
		printf("%.0f, ", z);
		x = y;
		y = z;
		z = x + y;
		if (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
