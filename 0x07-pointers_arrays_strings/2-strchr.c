#include "main.h"

/**
 * _strchr - search for position of first occurence
 * @s: pointer to character
 * @c: character to search
 * Return: returns 0 || s + i
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
