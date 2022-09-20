#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - converts str to int
 * @s: string
 * Return: return int
 */
int _atoi(char *s)
{
	int i, j;

	int a = 0;
	int b = 1;
	int num = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && j > 0)
			break;
		if (s[i] == '-')
			a++;
		if (s[i] == '+')
			a--;
		if (s[i] >= '0' && s[i] <= '9')
			j++;
	}
	while (j > 0)
	{
		num += ((s[i - 1] - '0') * b);
		i--;
		j--;
		b *= 10;
	}
	if (a >= 0)
	{
		num *= 1;
	}
	else
	{
		num *= -1;
	}
	return (num);
}
