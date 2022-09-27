#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: the substring
 * Return: a pointer to the beginning of needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *result;

	for (i = 0, k = 0; haystack[i] != '\0'; i++, j++)
	{
		result = &haystack[i];
		for (k = 0; needle[j + k] != '\0' && haystack[i + k] != '\0'
				&& needle[j + k] == haystack[i + k]; k++)
		{
			if (haystack[i + k] != needle[j + k])
				break;
		}
		if (needle[j + k] == '\0')
			return (result);
	}
	return (0);
}
