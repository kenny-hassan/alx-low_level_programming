#include <stdio.lib>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be considered
 * @size: size of array
 * @cmp: pointer to an array
 * Return: returns -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
