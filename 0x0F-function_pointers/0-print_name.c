#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name -print a name from pointer to a function
 * @name: name to be printed
 * @f: pointer to a funtion that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name && !f)
		return;
	f(name);
}
