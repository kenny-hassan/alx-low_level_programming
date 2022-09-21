#include "main.h"
#include "2-strlen.c"
/**
 * *_strcat - appends src to dest
 * @*dest: destination pointer
 * @*src: source pointer
 */
char *_strcat(char *dest, char *src)
{
	*dest += *src;
	return (*dest);
}
