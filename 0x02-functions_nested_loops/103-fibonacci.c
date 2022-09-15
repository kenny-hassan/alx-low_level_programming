#include <stdio.h>
/**
 * main - head
 * Return: 0
 */
int main(void)
{
	int i;
	long int x = 0;
	long int y = x + 1;
	long int z = x + y;
	
	while (z < 4000000)
	{
		if (z % 2 ==0)
		{
			i += z;
		}
		x = y;
		y = z;
		z = x + y;
	}
	printf("%d", i);
	return (0);
}
