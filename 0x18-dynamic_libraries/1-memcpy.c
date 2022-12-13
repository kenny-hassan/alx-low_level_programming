#include "main.h"
/**
 * _memcpy -  copies  n bytes from memory area src to memory area dest.
 * @dest: destination to be copied to.
 * @src: source to be copied from
 * @n: byte size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
