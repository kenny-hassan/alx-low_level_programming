#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
 * main - prints all arguments it receives.
 * @argc: argument
 * @argv: pointer arguement
 * Return: 0
 */
int main(int argc, char  *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
