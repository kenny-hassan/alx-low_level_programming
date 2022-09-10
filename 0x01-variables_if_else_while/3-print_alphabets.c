#include <stdio.h>
/**
 * main -uper and lower case
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar("%c\n", i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar("%c\n", i);
	}
	return (0);


}
