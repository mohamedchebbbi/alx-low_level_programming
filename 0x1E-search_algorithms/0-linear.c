#include "search_algo.h"

/**
 * linear_search - perform linear searchs
 * @array: the int array
 * @size:  size
 * @value: value to search
 *
 * Return: the index found or -1
 */
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
