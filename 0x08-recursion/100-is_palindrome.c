#include "main.h"

/**
 * len - helps do it
 * @s: string
 * Return: string length
 */
int len(char *s)
{
	int i = 0;
	{
		if (*s)
		{
			i = i + len(s + 1);
			return (i += 1);
		}
		return (0);
	}
}
/**
 * test - helps more
 * @i: integer i
 * @s: string
 * Return: int value
 */
int test(int i, char *s)
{
	if (*s)
	{
		if (*s != s[len(s) - i])
			return (0);
		else
			return (test(i + 1, s + 1));
		return (1);
	}
}


/**
 * is_palindrome - palindrome
 * @s: string
 * Return: boolean
 */

int is_palindrome(char *s)
{
	int i = 1;

	return (test(i, s));
}
