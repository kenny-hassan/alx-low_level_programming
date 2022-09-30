#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 * main - a program that prints its name
 * @argc: argument
 * @argv: argument pointer
 * Return: 0
 */
int main(int argc, char* argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
