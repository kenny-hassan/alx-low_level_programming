#include "main.h"
/**
 * string_toupper -change to upper case
 * @a_z: lower case char.
 * Return: upper case
 */
char *string_toupper(char *a_z)
{
	int i = 0;

	while (a_z[i])
	{
		if (a_z[i] >= 97 && a_z[i] <= 122)
			a_z[i] = a_z[i] - 32;
	}
	return (a_z);
}
