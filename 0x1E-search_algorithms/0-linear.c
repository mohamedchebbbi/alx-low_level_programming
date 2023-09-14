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
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
