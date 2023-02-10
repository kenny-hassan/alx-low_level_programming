#include "main.h"
#include <stddef.h>
/**
 * _strchr - search for position of first occurence
 * @s: pointer to character
 * @c: character to search
 * Return: returns 0 || s + i
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != '\0') && (s[i] != c); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
