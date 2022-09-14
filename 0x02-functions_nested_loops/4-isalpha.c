#include "main.h"
/**
 * int _isalpha - reads alphabet
 * @a: arguement
 * Return: 1 or 0
 */
int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (1);
	}
	return (0);
}
