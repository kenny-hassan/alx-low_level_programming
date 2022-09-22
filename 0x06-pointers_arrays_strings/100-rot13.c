#include "main.h"
/**
 * rot13 - ROT13 ("rotate by 13 places")
 * @str: string
 * Return: encoded string pointer
 */
char *rot13(char *str)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x, y;
	char i = str[x] <= 'z';
	char j = str[x] >= 'a';
	char k = str[x] <= 'Z' && str[x] >= 'A';

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 54; y++)
		{
			if ((i && j || (k)) && str[x] == alpha[y])
			{
				str[x] = c_alpha[y];
				break;
			}
		}
	}
	return (str);
}
