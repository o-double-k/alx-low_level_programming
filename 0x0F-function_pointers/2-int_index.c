#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an
 * array of integers
 * @array: The array of integers to be checked
 * @size: The size of the array of integers
 * @cmp: A pointer to the function to be used
 * to compare values
 * Return: Index of the first element for which
 * the cmp function does not return or -1 if
 * no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
