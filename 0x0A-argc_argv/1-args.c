#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument
 * @argv: pointer arguement
 * Return: 0
 */
int main(int argc, char  *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
