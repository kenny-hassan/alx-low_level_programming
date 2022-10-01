#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#define UNUSED(x) (void)(x)
/**
 * StringCheck - string to find
 * @s: string
 * Return: bool
 */
int StringCheck(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
/**
 * main - function
 *  @argc: argument
 *  @argv: pointer
 *  Return: 0
 */
int main(int argc, char  *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (StringCheck(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}
}
