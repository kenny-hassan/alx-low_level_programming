#include "main.h"
/**
 *_indexOf - returns boolean if special  character
 * @a: character to return
 * Return: true or false
 */
int _indexOf(char a)
{
	int i;
	char A[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (A[i] == a)
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalizes the string
 * @str: string
 * Return: the string capitalized
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (_indexOf(str[i]))
			continue;
		if (str[i] >= 'a' && str[i] <= 'z' && (_indexOf(str[i - 1]) || i == 0))
			str[i] = str[i] - 32;
	}
	return (str);
}
