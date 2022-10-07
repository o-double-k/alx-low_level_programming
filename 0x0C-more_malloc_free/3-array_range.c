#include "main.h"

/**
 * *array_range - Creates an array of integers
 * @min: Minimum
 * @max: Maximum
 * Return: Ordered array
 */

int *array_range(int min, int max)
{
	int *arr;

	int i = 0;

	int t = min;

	if (min > max)
	{
		return (0);
	}

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
	{
		return (0);
	}
	while (i <= max - min)
	{
		arr[i++] = t++;
	}
	return (arr);
}
