#include "search_algos.h"

/**
 * linear_search - int value search
 * @array: a pntr to 1st element array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: 1st index on success
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
