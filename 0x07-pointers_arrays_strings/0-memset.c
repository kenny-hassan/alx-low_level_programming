#include "main.h"
/**
 * _memset -set memory with a const.
 * @s: array to set
 * @b: value
 * @n: byte size
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
