#include "main.h"
/**
 * test - test instance
 * @i: int
 * @n: int to test
 * Return: 1
 */




int test (int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (test(i + 1, n));
	
	return (1);
}


/**
 * is_prime_number - check if it's a prime number
 * @n- arguement
 * Return: return 1 || 0
 */





int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (test(i, n));
}
