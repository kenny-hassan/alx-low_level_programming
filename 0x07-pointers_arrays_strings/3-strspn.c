#include "main.h"
/**
 * _strspn - length of string
 * @s: string
 * @accept: accepted bytes
 * Return: returns value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (result);
}
