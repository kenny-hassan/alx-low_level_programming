#include "main.h"
/**
 * leet - Encode function
 * @str: string
 * Return: encoded string poiter
 */
char *leet(char *str)
{
	char sp_C[] = "aeotl";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sp_C[j] != '\0'; j++)
		{
			if (str[i] == sp_C[j] || str[i] - 32 == sp_C[j])
			{
				str[i] = j + '0';
			}
		}
	}
	return (str);
}
