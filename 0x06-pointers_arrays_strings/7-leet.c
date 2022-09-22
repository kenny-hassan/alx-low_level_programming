#include "main.h"
/**
 * leet - Encode function
 * @str: string
 * Return: encoded string poiter
 */
char *leet(char *str)
{
	char sp_C[] = "a4A4e3E3o0O0t7T7l1L1";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sp_C[j] != '\0'; j++)
		{
			if (str[i] == sp_C[j])
			{
				str[i] = sp_C[j + 1];
			}
		}
	}
	return (str);
}
