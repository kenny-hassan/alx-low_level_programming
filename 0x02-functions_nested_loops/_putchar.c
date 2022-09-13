#include <unistd.h>
/**
 * _putchar - write to standard input/output
 * Return: 0
 * @k: print value of k
 */
int _putchar(char k)
{
	return (write(1, &k, 1));
}
