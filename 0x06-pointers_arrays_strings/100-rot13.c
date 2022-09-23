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
	char a = str[x];

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 54; y++)
		{
			if(((a <= 'z' && a >= 'a') || (a <= 'Z' && a  >= 'A')) && a == alpha[y])
			{
				str[x] = c_alpha[y];
				break;
			}
		}
	}
	return (str);
}
