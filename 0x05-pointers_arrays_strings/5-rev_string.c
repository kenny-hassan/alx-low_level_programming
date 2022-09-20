#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, k;
	char j;

	k = _strlen(s) / 2;
	for  (i = 0; i < k; i++)
	{
		j = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = j;
	}
}
