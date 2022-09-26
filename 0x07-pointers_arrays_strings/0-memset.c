#include "main.h"
/**
 * _memset -set memory with a const.
 * @s: array to set
 * @b: value
 * @n: byte size
 * Return: return s
 */
char _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
