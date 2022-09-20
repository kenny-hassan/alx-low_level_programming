#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: pointer
 * Return: an int value
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int ni = 0;
	int mi = 1;
	int si = 0;

	while (s[i])
	{
		if (s[i] == 45)
			mi *= -1;
		while (s[i] >= 48 && s[i] <= 57)
		{
			si = 1;
			ni = (ni * 10) + (s[i] - '0');
			i++;
		}

		if (si == 1)
			break;
		i++;
	}
	ni *= mi;
	return (ni);
}
