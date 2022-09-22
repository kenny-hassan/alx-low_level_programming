#include "main.h"
/**
 * _indxf - return true or false .
 * @a: string
 * Return: a
 */
int _indxf(char a)
{
	int i;
	char arr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (arr[i] == a)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes string
 * @s: string char
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_indxf(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (_indxf(s[i - 1]) || i == 0))
		s[i] = s[i] - 32;
	}
	return (s);
}
