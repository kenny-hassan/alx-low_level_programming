#include "main.h"
#include "2-strlen.c"
/**
 * _strncat - concatenate src to dest taking n bit
 * @dest: destination
 * @src: source
 * @n: bit
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = _strlen(dest);
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
