#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	char j[];

	j = *s;
	for  (i = 0; i < _strlen(s); i++)
	{
		s[i] = j[_strlen(s) - i - 1];
	}
}
