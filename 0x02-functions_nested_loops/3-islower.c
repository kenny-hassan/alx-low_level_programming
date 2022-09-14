#include <main.h>
/**
 * _islower - tell lower case
 * @k: arguement
 * Return: 1 or 0
 */
int _islower(int k)
{
	if (k <= 'z' && k >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
