#include "main.h"
#include "2-strlen.c"
/**
 * *_strcat - appends src to dest
 * @*dest: destination pointer
 * @*src: source pointer
 */
char *_strcat(char *dest, char *src)
{
	int j, i;

	i = _strlen(dest);
	for (j = 0; j <= _strlen(src); j++)
	{
	dest[i + j] = src[j];
	}
	return (dest);
}
