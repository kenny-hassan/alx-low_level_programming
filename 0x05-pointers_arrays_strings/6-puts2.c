#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - print other char
 * @str: char to be filter
 */
void puts2(char *str)
{
	int i;

	for  (i = 0;  i < _strlen(s); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(s + i));
		}
	}
	_putchar('\n');
}
